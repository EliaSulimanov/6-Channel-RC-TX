# 6 Channel RC TX

[![Elia Sulimanov](https://image.ibb.co/mBx97A/powerd-by-Elia-Sulimanov.jpg)](https://www.linkedin.com/in/elia-sulimanov/)

2.4 GHZ, 6 channel RC TX (Remote). Made for plane but can be used for any craft.
### This project made with and for ATtiny84 platform.

## Contents
 - [How it works](#how-it-works)
 - [Quick start](#quick-start)
    - [Installing](#installing)
    - [Using](#using)
 - [Breadboard](#breadboard)
 - [Schematics](#schematics)
 - [Related Projects](#related-projects)
 - [License](#license)

 ## How It Works
 - The remote is transmitting messages to the receiver (that is on the RC) using 2.4 GHZ radio.
 - The message is int array, and each index is dedicated to different operation the RC can do.
 - Please view the [receiver](https://github.com/EliaSulimanov/RC_plane_rx) code for further understanding about the wat the RX translate the message to operation.

## Quick start
### Installing
First make sure arduino enviorment is installed on your pc and ATtiny85 board is available.  
In order to compile and use this code you must include nRF24L01 lib. more info here: [maniacbug/RF24](https://github.com/maniacbug/RF24/blob/master/README.md)
Next upload this code to your ATtiny84 using arduino as ISP.

### Using
All you need to do is just wire your breadboard/pcb as [Here](#breadboard).
You are good to go!

## Breadboard
<img src="https://i.ibb.co/k0qBmnP/RC-TX-pcb.jpg" width="250px" height="250px">

## Schematics
<img src="https://i.ibb.co/DtzFNxG/RC-TX-schem.jpg" width="300px" height="200px">

## Related Projects
* [Cessna 182 Lights](https://github.com/EliaSulimanov/Cessna-182-Lights)
* [RC plane rx](https://github.com/EliaSulimanov/RC_plane_rx)

## License
GNU General Public License v3.0
