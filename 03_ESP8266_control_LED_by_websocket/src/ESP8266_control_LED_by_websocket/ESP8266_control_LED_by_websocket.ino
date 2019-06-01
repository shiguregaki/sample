#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WebServer.h>
#include <FS.h>
#include <WebSocketsServer.h>

ESP8266WiFiMulti wifiMulti;
ESP8266WebServer server(80);
WebSocketsServer webSocket(81);

/************************************************ PARAMETERS ************************************************/

/* If you use this program as AP, set any ssid name and password. */
const char *ssid = "ESP8266 Access Point";
const char *password = "esp8266-test";

/* If you use this program as ST, set the ssid name and password of your AP.
   If you does NOT set following parameter, this program run as AP.*/
const char *myssid = "The ssid name of your AP";
const char *mypassword = "The password of your AP";

#define LED_PIN     15          // set OUTPUT pin of LED.

/************************************************ SETUP ************************************************/

void setup() {
  // set serial monitor.
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(10);
  Serial.println("\r\n");

  // Execute SETUP_FUNCTIONS.
  setupWiFi();
  setupSPIFFS();
  setupWebSocket();
  setupServer();
}

/************************************************ LOOP ************************************************/

void loop() {
  webSocket.loop();
  server.handleClient();
}

/************************************************ SETUP_FUNCTIONS ************************************************/

/* Set up Wi-Fi AP or ST.
   Default running is AP mode, but if your Wi-Fi AP is found, this program run as ST mode. */
void setupWiFi() {
  Serial.println("[info] Execute setupWiFi() function.");
  WiFi.softAP(ssid, password);
  wifiMulti.addAP(myssid, mypassword);

  // Wait for the Wi-Fi to connect.
  Serial.println("[info] Connecting");
  while (wifiMulti.run() != WL_CONNECTED && WiFi.softAPgetStationNum() < 1) {
    delay(250);
    Serial.print('.');
  }
  Serial.println("\r\n");

  // Check AP or ST mode.
  if(WiFi.softAPgetStationNum() == 0) {
    Serial.println("[info] Run as ST mode.");
    Serial.print("[info] Access destination IP address:\t");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("[info] Run as AP mode.");
    Serial.print("[info] Access destination IP address:\t");
    Serial.println(WiFi.softAPIP());
  }
  Serial.println("[info] Wi-Fi setup was complete.");Serial.println("");
}

/* Set up SPI Flash File System (SPIFFS). */
void setupSPIFFS() {
  Serial.println("[info] Execute setupSPIFFS() function.");
  SPIFFS.begin();
  Serial.println("[info] SPIFFS contents:");
  Dir dir = SPIFFS.openDir("/");
  while (dir.next()) {
    String fileName = dir.fileName();
    size_t fileSize = dir.fileSize();
    Serial.printf("\tFile name: %s, size: %s\r\n", fileName.c_str(), formatBytes(fileSize).c_str());
  }
  Serial.println("[info] SPI Flash File System (SPIFFS) setup was complete.");Serial.println("");
}

/* Set up WebSocket server. */
void setupWebSocket() {
  Serial.println("[info] Execute setupWebSocket() function.");
  webSocket.begin();
  webSocket.onEvent(webSocketEvent); // Register handler.
  Serial.println("[info] WebSocket server setup was complete.");Serial.println("");
}

/* Set up WebSocket server.  */
void setupServer() {
  Serial.println("[info] Execute setupServer() function.");
  server.onNotFound(handleRoot); // Register handler.
  server.begin();
  Serial.println("[info] HTTP server setup was complete.");Serial.println("");
}

/************************************************ SERVER_HANDLERS ************************************************/

/* If abnormal site access is detected, return to 404 page.
   The site access destination is judged true or false in this handler.*/
void handleRoot(){
  if(!handleFileRead(server.uri())){
    server.send(404, "text/plain", "404: File Not Found");
    Serial.println("[warn] Detect abnormal URL access.");
  }
}

/* If normal site access is detected, return to requested file. */
bool handleFileRead(String path) {
  Serial.println("[info] handleFileRead: " + path);
  if (path.endsWith("/")) path += "index.html";
  String pathWithGz = path + ".gz";
  if (SPIFFS.exists(pathWithGz) || SPIFFS.exists(path)) {
    if (SPIFFS.exists(pathWithGz)){
      path = pathWithGz;
    }
    File file = SPIFFS.open(path, "r");
    size_t sent = server.streamFile(file, getContentType(path));
    file.close();
    Serial.println(String("\tSent file: ") + path);
    return true;
  }
  Serial.println(String("\tFile Not Found: ") + path);
  return false;
}

/* If WebSocket message is received, execute processing according to the data. */
void webSocketEvent(uint8_t num, WStype_t type, uint8_t * payload, size_t lenght) {
  switch (type) {
    case WStype_DISCONNECTED:
      Serial.printf("[warn] [%u] Disconnected!\n", num);
      break;
    case WStype_CONNECTED:{
      IPAddress ip = webSocket.remoteIP(num);
      Serial.printf("[info] [%u] Connected from %d.%d.%d.%d url: %s\n", num, ip[0], ip[1], ip[2], ip[3], payload);
    }
      break;
    case WStype_TEXT:{
      Serial.printf("[info] [%u] get Text: %s\n", num, payload);
      if (payload[0] == '#') {
        uint32_t data = (uint32_t) strtol((const char *) &payload[1], NULL, 10);
        analogWrite(LED_PIN, data);
      }
    }
      break;
  }
}

/************************************************ HELPER_FUNCTIONS ************************************************/

/* Convert sizes in bytes to KB and MB. */
String formatBytes(size_t bytes) {
  if (bytes < 1024) {
    return String(bytes) + "B";
  } else if (bytes < (1024 * 1024)) {
    return String(bytes / 1024.0) + "KB";
  } else if (bytes < (1024 * 1024 * 1024)) {
    return String(bytes / 1024.0 / 1024.0) + "MB";
  }
}

/* Return the filetype from filename. */
String getContentType(String filename) {
  if (filename.endsWith(".html")) return "text/html";
  else if (filename.endsWith(".css")) return "text/css";
  else if (filename.endsWith(".js")) return "application/javascript";
  else if (filename.endsWith(".ico")) return "image/x-icon";
  else if (filename.endsWith(".gz")) return "application/x-gzip";
  return "text/plain";
}
