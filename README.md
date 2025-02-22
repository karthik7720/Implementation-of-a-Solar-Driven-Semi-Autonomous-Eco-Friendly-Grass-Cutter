Solar-Driven Semi-Autonomous Eco-Friendly Grass Cutter

Introduction
This project presents a solar-powered, semi-autonomous grass cutter designed for efficient and
eco-friendly lawn maintenance. The system operates on renewable solar energy and features 
Bluetooth control, obstacle detection, and dual operation modes (manual & autonomous).
It reduces manual effort and promotes sustainable lawn care by integrating automation and smart
control.![Picture](https://github.com/user-attachments/assets/e7753b9c-c03b-479a-b297-dc8ad538b899)


Features

•	Solar-powered operation for energy efficiency

•	Semi-autonomous navigation with obstacle detection

•	Bluetooth-based control via a mobile app

•	Dual operation modes (manual and autonomous)

•	Efficient grass cutting with optimized energy usage

•	Remote monitoring and control using MIT App Inventor


![Final Circuit](https://github.com/user-attachments/assets/6359fb5b-571a-4139-846b-1984f72e9d80)


Components Used

•	Arduino Nano (Microcontroller)

•	L298N Motor Driver (For vehicle motor control)

•	6 DC Motors (For movement)

•	BLDC Grass Cutting Motor (Controlled via a relay module)

•	1-Channel Relay Module (For grass-cutting motor control)

•	Ultrasonic Sensor (HC-SR04) (For obstacle detection)

•	Servo Motor (For directional adjustments)

•	HC-05 Bluetooth Module (For wireless control)

•	12V, 10W Solar Panel (For renewable energy supply)

•	11.1V Li-Ion Battery (For energy storage)

•	Mode Control Switch (To switch between manual and autonomous modes)

•	Wires & Connectors (For electrical connections)

System Overview

The grass cutter integrates an Arduino Nano, an L298N motor driver, Bluetooth (HC-05),
an ultrasonic sensor, and a relay-controlled cutting motor. It moves using multiple DC motors,
adjusts direction via a servo mechanism, and features a mode control switch for flexible
operation. The solar panel charges the battery, ensuring an eco-friendly and continuous power 
supply.


![App_Interface](https://github.com/user-attachments/assets/486e430a-3c3d-4a50-a04b-f2a0b582e7c8)


Creating the Mobile App Using MIT App Inventor
1.	Open MIT App Inventor – Go to MIT App Inventor and create a new project.
2.	Design the User Interface – Add buttons for movement controls (Forward, Backward, Left, Right, Stop), a Bluetooth connection module, and a status display.
3.	Connect to Bluetooth Module – Use the BluetoothClient component to establish a connection with the HC-05 module.
4.	Send Commands to Arduino – Assign each button to send movement commands via Bluetooth (e.g., "F" for forward, "B" for backward).
5.	Test and Deploy – Install the app on your Android device, pair it with the Bluetooth module, and control the grass cutter remotely.


![Uploading Grass_Results.jpg…]()


Applications

•	Residential lawn maintenance

•	Commercial landscaping

•	Eco-friendly smart gardening solutions

•	Agricultural field management

•	Autonomous lawn care in public parks




