#include <WiFi.h>

char ssid[] = "FIWI";      //SSID of your network

int status = WL_IDLE_STATUS;     // the Wifi radio's status

IPAddress ip;                    // the IP address of your shield

void setup()
{
 // initialize serial:
 Serial.begin(9600);

 WiFi.begin(ssid);

  if ( status != WL_CONNECTED) {
    Serial.println("Couldn't get a wifi connection");
    while(true);
  }
  // if you are connected, print out info about the connection:
  else {
 //print the local IP address
  ip = WiFi.localIP();
  Serial.println(ip);

  }
}

void loop () {}
