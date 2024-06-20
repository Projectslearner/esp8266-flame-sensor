/*
    Project name : ESP8266 Flame Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-flame-sensor
*/

#define FLAME_SENSOR_PIN 14  // D5 on NodeMCU

void setup() 
{
    Serial.begin(115200);
    pinMode(FLAME_SENSOR_PIN, INPUT);
}

void loop()
{
    int flameDetected = digitalRead(FLAME_SENSOR_PIN);

    if (flameDetected == LOW) 
    {
        Serial.println("Flame detected!");
    } 
    else
    {
        Serial.println("No flame detected.");
    }

    delay(500);
}
