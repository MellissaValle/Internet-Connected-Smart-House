# Internet-Connected-Smart-House
![IMG_3173](https://user-images.githubusercontent.com/74070082/151723021-02d6ce09-7025-42d1-b774-8ec367704b51.jpg)

- Sensor Data from Embedded microcontroller hardware connected. 
- Testing Ultrasound sensor for opening and closing door
- Welcome message when someone approaches the house
- Green Light welcome/Red light Door closed
- Assembling the 3D printed house

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

#### Recommendation:
To attach the 3D printed door to the servo motor,use hot glue instead of 3D printing filament to
avoid melting the actual door or servo. Hot glue does the trick perfectly to have a firm attachment

![Door](https://user-images.githubusercontent.com/74070082/151723585-0e3d006f-37f7-495d-8d7d-75c456ea0596.png)


### Navigating the Repository
```

├── images
│         ├── ... <-------- Images used for README
├── .gitignore  <------- Large Datasets listed here
├── README.md
├── presentation.pdf <-------- Non-Technical presentation Deck
├── requirements.txt 
├── environment.yml
├── utils.py <--------- functions used to clean data
└── notebook.ipynb <--------- Complete Analysis
```
