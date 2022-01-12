# PROJECT: SMART IRRIGATION SYSTEM WITH ARDUINO


It's a project I developed to test my habilits using Arduino and coding. The project is a little smart irrigacion system controlled with Arduino. I'll show you the steps to create this prototype, with the components, code, and some explanations.
> Note. This was my project I created in my last year of school to present my TCC.

### COMPONENTS

Create the smart irrigacion system for houseplants, We'll need de some components like:
- (1x) Arduino UNO R3 (or any other Arduino model, this was just the model I used in my project);
- (Nx) Jumpers male to male, female to female and male to female;
- (1x) Soil moisture sensor;
- (1x) 5v Relay module;
- (1x) Solenoid valve 12v 180° (1/2 x 1/2);
- (1x) 12v Source (I used my notebook as a source, but it can be any other 12v source);
- (1x) Soldering Iron (optional);
- (3x) Quick coupling for hose;
- (1x) Hose.

### EXPLANATION OF EACH COMPONENT

### ARDUINO

Arduino is a little electronic board capable of infinite automation possibilities. Using it you can create just about anything you can imagine. In this project the Arduino will be used to armazen all the program code and allow the connection of the components.

<img src="https://user-images.githubusercontent.com/50830455/148825226-99aa2e45-cf2f-42f9-ae08-c8ce1778c1dd.jpeg" width="500"/>

### JUMPERS, MALE TO MALE, FEMALE TO FEMALE AND MALE TO FEMALE

Jumpers will be used to allow the connection of the components, connecting to each other (if you prefer, you can use the protoboard, your project would be more ornanized. But I'll be connecting to the Arduino itself)

<img src="https://user-images.githubusercontent.com/50830455/148828772-0a5384e0-0c37-41ee-a39c-9438600f1330.jpeg" width="500"/>

### SOIL MOINSTURE SENSOR 

This sensor is responsible for detecting soil moinsture. It'll beconnected to the Arduino and will be stuck directly to the ground, vase or garden.

<img src="https://user-images.githubusercontent.com/50830455/148826184-fda34e58-26fe-453f-b5b4-e08bf6172429.jpeg" width="400"/>

### RELAY MODEL

Relay model is responsible for connecting some components, in the project it will be used to connect the solenoid valve to the Arduino.

<img src="https://user-images.githubusercontent.com/50830455/148826065-600bbcbd-fb6e-4f4a-aa9b-a4d1de07df05.jpeg" width="400"/>

### SOLENOID VALVE

The solenoid valve is a system responsible for allowong or denying the arrival of the water to the plant. It'll be on when the soil moinsture sensor detects dry soil and off when the soil moinsture detects wet soil. 

<img src="https://user-images.githubusercontent.com/50830455/148826253-b625b096-2927-4cc3-9778-0b817dec9bd5.jpeg" width="400"/>

### SOURCE

The source is what will be used to power the Arduino and the solenoid valve. I didn't use a source, I used my notebook because it's a prototype and I recommend you use a 12v source than a notebook.

### SOLDERING IRON

Soldering iron is only soldering the connection wires with the solenoid valve. Using this tool is optional, but I recommend you using it because your project will be more organized and secure.

<img src="https://user-images.githubusercontent.com/50830455/148828877-2299d3d5-5aab-4f7c-97b6-1fd15ec81160.jpeg" width="400"/>

### QUICK COUPLING FOR HOSE

It's will facilitate the project to connect the hose to the solenoid valve.

<img src="https://user-images.githubusercontent.com/50830455/148828834-5f138d30-a807-4dc3-a447-71ac07b824ac.jpeg" width="400"/>

### HOSE

The hose is responsible for the passage of water.

### LET'S ASSEMBLE THE SYSTEM

The first step is to connect the soil moinsture sensor to the Arduino. You will need some jumper for this. You will connect the jumpers to the ports: positive jumper on the **5v port**, negative jumper on the **GND port** and the analog jumper on the **A0 port**. Like the picture below (image created on TinkerCard. The PIR sensor replaces the soil moinsture sensor, because there in no soil sensor in the platform).

<img src="https://user-images.githubusercontent.com/50830455/149005898-ccf58d8c-8dd9-4cf1-9109-b40cdfb304bb.png" width="400"/>

**Let's turn on the solenoid valve! This is the hardest step, so pay close attention!**
If you are using a 12v source, you will need:
- You will need to solder a wire to the solenoid valve and connect that same wire to the 12v source (this wire is responsible for powering the valve);
- Then you will solder a wire on the other side of the solenoid valve, but do not connect it to the 12v source (this wire is resposible for connecting the valve to the relay module);
- The last wire you will leave connected to the 12v source (this wire is responsible for powering the relay module).

In my case, I'm not using a 12v source, so I made a workaround using old chargers because I'll to plug the valve into the outlet. But I recommend using a source, because it'safer and easier.
Explanation of workaround: 
- I used an old charger and cut the part to connect to the cellphone;
- I stripped the wire and separated the 2 wires that were inside (wires black and white);
- The black wire I soldered to the solenoid valve to supply power;
- The white wire will supply power to the relay module;
- I soldered another black wire to the valve, this wire is responsible for connecting the solenoid valve to the relay module.

The 2 processes have the same result, but I recommend using a 12v source and not a workaround like me.

Workaround picture:

<img src="https://user-images.githubusercontent.com/50830455/148966111-8f505fde-4e94-4661-8a91-96dad3ce9c68.jpeg" width="400"/>
 
Now just connect the wires to the relay module, connecting the white wire and the black wire as in the picture below.
  
<img src="https://user-images.githubusercontent.com/50830455/148966726-a8d59247-a6c6-4ddf-aa75-946b4c3d8382.jpeg" width="400"/>
 
Now just connect the relay module to the Arduino using the jumpers male to female. Connect the negative jumper to the GND port, the positive jumper to the 5v port and analog jumper to the 10 port.
  
<img src="https://user-images.githubusercontent.com/50830455/148966964-58a3f8c1-8112-4453-885d-e06551cac168.jpeg" width="400"/>

The last assemply step is to connect the hose to the solenoid valve. For this you must cut the hose in 2 parts, one part of the hose will be connected to the valve (where the water will drain to water the plants) using the quick coupling of hose and the other part will be connected to the other side of the valve and connected to the faucet. Like the picture below. 
> Note. The point highlighted in red is the side connected to the faucet.

<img src="https://user-images.githubusercontent.com/50830455/148968077-96b9f52f-6ff3-4e4c-b882-ede6abbe8fa7.jpg" width="400"/>
  
### FINAL RESULT OF THE PROTOTYPE:
  
<img src="https://user-images.githubusercontent.com/50830455/149020584-eca4ac1e-cb76-4ce5-b845-cddbdc72ca0f.jpeg" width="400"/> <img src="https://user-images.githubusercontent.com/50830455/149020699-e010edd7-9e8b-445a-9feb-7901f65073a1.jpeg" width="400"/>

## PROGRAM CODE

The first step is you have already installed the Arduino IDE on your computer, if you haven't already, you can enter in the oficial Arduino website and download it, it's quick and simple. https://www.arduino.cc/en/software

After downloading Arduino IDE download - our coding environment, We'll code.

To program the Arduino board, you will need to connect the USB cable to the Arduino and to the computer. After setting up the Arduino IDE environment, you'll undersant my code and write your code your way or simply Ctrl C and Ctrl V in my code.
The program code is in that same repository, the file name is **Codigo_Projeto**. The file is already commented out with all the instructions, so it's easy to understand.

If you're not sure how to assemble the project, I'll leave a link to a youtube video from the Manual do Mundo showing how to assemble the project step by step.https://www.youtube.com/watch?v=_xRyePvaMqU
