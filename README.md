
# Temperature-reading

The project focuses on making a Temperature reader using Blynk IOT and Arduino IDE applications.
A simple IoT project using an ESP8266 microcontroller to monitor temperature and humidity with a DHT11 sensor and send data to Blynk app.

## Hardware setup
To set up the hardware for this project, follow these steps:

1. Connect a DHT11 sensor to your ESP8266 microcontroller. The specific pins used for data (DHTPIN) and the sensor type (DHTTYPE) are defined in the code.

2. Provide power to your ESP8266 board and ensure it's connected to your Wi-Fi network.

3. The ESP8266 will read data from the DHT11 sensor and send it to the Blynk app over Wi-Fi.

4. Optionally, you can include a schematic or wiring diagram to help users visualize the hardware connections.

## Software setup
To set up the software for this project, follow these steps:

1. Install the required libraries, such as the DHT library and the Blynk library, as specified in the code.

2. Update the authentication token (BLYNK_AUTH_TOKEN) to match your Blynk app project.

3. Enter your Wi-Fi network credentials (SSID and password) in the code.

4. Upload the code to your ESP8266 microcontroller using the Arduino IDE or your preferred development environment.

5. Open the Arduino Serial Monitor to view the ESP8266's output. It should confirm a successful connection to Blynk.

6. The ESP8266 will continuously read temperature and humidity data from the DHT11 sensor and send it to the Blynk app.

## Usage 
To use the ESPDAY2 Weather Station, follow these steps:

1. Open the Blynk app on your mobile device and create a project.

2. Add widgets in the Blynk app to display temperature and humidity data received from your ESP8266.

3. Monitor real-time temperature and humidity data from the Blynk app.

4. The ESP8266 will continuously update the data in the Blynk app, providing you with up-to-date environmental information.

## Screenshots

![ESP.png](https://github.com/Piyushagarwal26/Temperature-reading/blob/main/ESP.png?raw=true)

