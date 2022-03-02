# Internet-Connected-Smart-House
![IMG_3173](https://user-images.githubusercontent.com/74070082/151723021-02d6ce09-7025-42d1-b774-8ec367704b51.jpg)

- Sensor Data from Embedded microcontroller hardware connected. 
- Testing Ultrasound sensor for opening and closing door
- Welcome message when someone approaches the house
- Green Light welcome/Red light Door closed
- Assembling the 3D printed house

### Components
- Arduino UNO
- Sensor Shield
- Fan/DC motor
- Light/RGB LED
- Motion detection/ Ultrasound
- Temp & Hum/DHT11
- Display/LCDi2c

### Original House versus the 3D printed version
![house](https://user-images.githubusercontent.com/74070082/151723806-65ce9357-7009-4b05-b1d2-b01c6591db0c.png)

Reasons why 3D printed version is better compared to the original house included in the kit
- Air flow : As more and more sensors and actuators are added to the house, the
microcontroller MEGA 2650 can overheat causing damages. To avoid that the 3d printed
version was design to allow air flow.
- Rearrange/ moving in/output sensors around the house: Sensors have a specific place
to be put on, with the new version they can always be relocated to different sections of
the house.
- Easier and more convenient placing all the sensors with their wires through the walls.

### Block Diagram

![Block](https://user-images.githubusercontent.com/74070082/155733686-82cea129-507a-4256-b6c8-d0eee1421a33.png)

#### Recommendation:
To attach the 3D printed door to the servo motor,use hot glue instead of 3D printing filament to
avoid melting the actual door or servo. Hot glue does the trick perfectly to have a firm attachment

![Door](https://user-images.githubusercontent.com/74070082/151723585-0e3d006f-37f7-495d-8d7d-75c456ea0596.png)

### Display/LCDi2c
Displaying welcome message

![image](https://user-images.githubusercontent.com/74070082/151882366-750c77ee-0309-4049-9f75-6caa38ebb557.png)

### DC On/Off Motor - Motion Detection
CD Motor + Ultrasonic Sensor 

![DC_Motor_UltraSound](https://user-images.githubusercontent.com/74070082/153728754-93848544-5c6d-4b4f-8799-189202cb29b6.png)


### Navigating the Repository
```

├── images
│         ├── ... <-------- Images used for README
├── README.md
├── presentation.pdf <-------- Non-Technical presentation Deck
└── sketchbook <--------- Code
```

### License

This project is released under a Public Domain License.
### Contributing

To contribute to this project please contact mellissavalle https://id.arduino.cc/mellissavalle

