var connection = new WebSocket('ws://'+location.hostname+':81/', ['arduino']);
connection.onopen = function () {
    connection.send('Connect ' + new Date());
};
connection.onerror = function (error) {
    console.log('WebSocket Error ', error);
};
connection.onmessage = function (e) {  
    console.log('Server: ', e.data);
};
connection.onclose = function(){
    console.log('WebSocket connection closed');
};

function sendLED() {
    var led = document.getElementById('led').value;
    document.getElementById("value").innerHTML = led.toString(10);
    ledstr = '#' + led.toString(10); 
    console.log('LED: ' + ledstr); 
    connection.send(ledstr);
}
