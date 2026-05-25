# Smart Helmet Safety System with Accident and Alcohol Detection

##  Project Overview
The Smart Helmet Safety System with Accident and Alcohol Detection is an embedded engineering project designed to improve road safety by ensuring that riders follow essential safety measures. Road accidents are increasing due to negligence such as not wearing helmets and driving under the influence of alcohol.
This system helps prevent such situations by monitoring rider safety conditions and controlling vehicle ignition.

## Objectives
- Detect whether the helmet is worn  
- Detect alcohol consumption of the rider  
- Prevent vehicle start in unsafe conditions  
- Detect accidents using vibration sensor  

## Methodology
The system integrates multiple sensors with Arduino:

- IR sensor checks whether the helmet is worn  
- MQ-3 alcohol sensor detects alcohol presence  
- Vibration sensor detects accidents  
- Arduino processes all sensor inputs  

Based on conditions, the system controls:
- Relay (vehicle ignition control)  
- Buzzer and LED (alerts)  

If all conditions are safe, the vehicle is allowed to start. Otherwise, it is blocked and alerts are triggered.

## Hardware Description
The main components used in this project include:
- Arduino Uno  
- IR sensor (helmet detection)  
- MQ-3 alcohol sensor  
- Vibration sensor  
- Relay module  
- Buzzer  
- LEDs  
- GSM module  
- Breadboard  
- Connecting wires  

Each component plays a key role in monitoring safety conditions and controlling vehicle operation.

## Software Used
- Arduino IDE  
- Embedded C programming language  
The software is used to write, compile, and upload code into the Arduino board for controlling all sensors and output devices.

##  Advantages
- Improves rider safety  
- Prevents drunk driving  
- Ensures helmet usage  
- Cost-effective and easy to implement  
- Can be extended with GPS and advanced tracking systems  

##  Applications
- Two-wheeler safety systems  
- Road accident prevention  
- Traffic safety monitoring  
- Smart transportation systems  

-## Future Improvements
- GPS-based live location tracking  
- SMS alert system using GSM  
- Mobile application integration  
- Cloud-based accident monitoring system  

 ## Project Files
- Code: `main.ino`  
- Images: `/images`  
- PPT: `/ppt/Smart_Helmet_Safety_System_Presentation.pptx`  
- Report: `/report/Smart_Helmet_Safety_System_Report.pdf`  

## Team Members
- Prajwal Gowda J (Team Lead)  
- Prajwal Gowda C  
- Surya Pratap  
- Sanjay Kumar  

##  License
This project is licensed under the MIT License.

##  Acknowledgement
We sincerely thank our faculty and institution for their guidance and support in completing this project successfully.
