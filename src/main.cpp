#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Nitin Kumar
 * @date 2026-02-19
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Sensor Initialized");
}





void loop() {

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (isnan(humidity) || isnan(temperature))
    {
        Serial.println(F("Failed to read from DHT sensor!"));
        delay(2000);
        return;
    }
    Serial.println("Humidity: ");
    Serial.println(humidity);
    Serial.println(" %  |  ");
    Serial.println("Temperature: ");
    Serial.println("Temperature: ");
    Serial.println(temperature);
    Serial.println(" C ");
    delay(2000);
}
