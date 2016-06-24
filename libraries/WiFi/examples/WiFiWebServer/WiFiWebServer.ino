/*
  WiFi Web Server

 A simple web server that shows the value of the analog input pins.
 using a WiFi shield.

 This example is written for a network using WPA encryption. For
 WEP or WPA, change the Wifi.begin() call accordingly.

 Circuit:
 * WiFi shield attached
 * Analog inputs attached to pins A0 through A5 (optional)

 created 13 July 2010
 by dlf (Metodo2 srl)
 modified 31 May 2012
 by Tom Igoe

 */

#include <SPI.h>
#include <WiFi.h>


char ssid[] = "bbox2-5de4";      // your network SSID (name)
char pass[] = "ARLARLARL";   // your network password
int keyIndex = 0;                 // your network key Index number (needed only for WEP)

int status = WL_IDLE_STATUS;

WiFiServer server(5100);

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }

  // check for the presence of the shield:
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue:
    while (true);
  }

  String fv = WiFi.firmwareVersion();
  if ( fv != "1.1.0" )
    Serial.println("Please upgrade the firmware");

  // attempt to connect to Wifi network:
  while ( status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }
  server.begin();
  // you're connected now, so print out the status:
  printWifiStatus();
}


void loop() {
  WiFiClient client = server.available(); //on écoute le port
  if (client) { //si client connecté
    Serial.println("Client en ligne\n"); //on le dit...
    if (client.connected()) { // si le client est en connecté
      while (client.available()) { // tant qu'il a des infos à transmettre
        char c = client.read(); // on lit le caractère
        Serial.write(c);// on l'écrit sur le moniteur série
        delay(1); //delai de lecture
      }
      //réponse au client

      client.println("<!DOCTYPE HTML>"); // informe le navigateur du type de document à afficher
      client.println("<html>"); //début du code html
      client.println("<head>"); //entête
      client.println("<title>Relevés analogiques</title>"); //titre de la fenêtre
      client.println("</head>");//fin d'entête
      client.println("<body>"); //corps
      client.println("<h1>Etat des pins analogiques</h1>"); //titre en grosse lettres
      client.println("<hr>"); //ligne horizontale
      for (int p = 0; p < 6; p++) { // boucle pour parcourir les pins
        client.print("pin A"); // affichage
        client.print(p); //numéro de pin
        client.print(" : "); // affichage
        client.print(analogRead(p)); //valeur donnée par le CAN
        client.print("<br>"); //saut de ligne
      }
      client.println("<hr>"); //ligne horizontale
      client.println("</body>"); //fin du corps
      client.println("</html>"); //fin du code html
      client.stop(); //on déconnecte le client
      Serial.println("Fin de communication avec le client");
    }
  }
}


void printWifiStatus() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your WiFi shield's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}

