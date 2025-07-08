
  # IoT Home Automation using Digital Logic

### 🔧 Project Description:
This project uses a PIR sensor and a remote input to control a home appliance using an Arduino Uno. Logic is applied using an AND condition — both motion and remote command must be present to turn the device ON.


### ✅ Features (According to Internship Guidelines):

1. **Interference Sensor**: Uses PIR to detect human motion
2. **Microcontroller & Logic**: Arduino Uno + AND gate logic
3. **Remote Control**: Push button used to simulate Bluetooth/Wi-Fi
4. **Power Optimization**: Minimal delay, system active only when triggered


### 🧠 Working Table:

| PIR | Remote | Output |
|-----|--------|--------|
| 0   | 0      | OFF    |
| 1   | 0      | OFF    |
| 0   | 1      | OFF    |
| 1   | 1      | ON     |


### 📂 Full Code:
Check the `Code.ino` file in this repository for the full Arduino program.
