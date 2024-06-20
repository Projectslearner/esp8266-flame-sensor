# ESP8266 Flame Sensor Project

#### Project Overview
This project demonstrates how to interface a flame sensor with an ESP8266 microcontroller. The sensor detects the presence of a flame and displays the result on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **Flame Sensor**
- **Jumper Wires**
- **Breadboard (optional)**

#### Block Diagram
![ESP8266 Flame Sensor Block Diagram](block_diagram.png)

#### Circuit Setup
1. **Connecting the Flame Sensor to ESP8266:**
   - **VCC:** Connect to the 3.3V pin on the ESP8266.
   - **GND:** Connect to the GND pin on the ESP8266.
   - **OUT:** Connect to the D5 pin (GPIO 14) on the ESP8266.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, open the Serial Monitor.
   - You should see messages indicating whether a flame is detected or not printed to the Serial Monitor every half second.

#### Applications
- **Fire Detection:** Use the flame sensor for fire detection and alarm systems.
- **Safety Systems:** Integrate into safety systems to detect and respond to the presence of fire.
- **Home Automation:** Use for smart home applications to enhance safety and security.

#### Notes
- **Sensitivity Adjustment:** Some flame sensors have a potentiometer to adjust sensitivity. Calibrate as necessary for accurate detection.
- **Power Supply:** Ensure a stable power supply to the ESP8266 and flame sensor.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Flame Sensor](https://projectslearner.com/learn/esp8266-flame-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner