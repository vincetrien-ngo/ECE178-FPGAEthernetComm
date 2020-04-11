# ECE178-FPGAEthernetComm

Abstract

A firewall can be defined as a network security device that monitors incoming and outgoing traffic with the ability to permit or block the flow of data based on a set of given security rules. The DE2-115 board has ethernet capabilities that allow for high-speed transmission of data. The FPGA board has two ethernet ports that can be used to implement a firewall between two connected devices.

The intent of this project is to have two devices that will transmit sets of data between themselves, and to design and program a system on the DE2-115 FPGA board that will be able to examine data transmitted between devices and block certain data based on rules specified by the team. Data could be restricted based on pre-determined patterns of data, as well as identification from the transmitting devices. Another intent of this project is to be able to create a packet using the board and send any form of information to a device.

![OSI Model Image](https://github.com/vincetrien-ngo/ECE178-FPGAEthernetComm/blob/master/img/osimodel.PNG)
Figure 1: OSI Model, Where Ethernet Stands

In the OSI model ethernet is present in the first two layers. In Figure 1 it shows the Data Link layer and the Physical Layer being the ones that use ethernet. Though for the Data Link layer only half of it is used. The Media Access Control (MAC) sublayer while the entirelty of the physical layer is used. The other half of the Data Link layer is called the Logical Link Control (LLC) sublayer. The MAC controls the the starting of data transmission and it also handles failures when information fails to send. The LLC handles communication between layers above the Data Link layer (i.e the Network Layer above it and the Physical Layer below it). 

![OSI Model Image](https://github.com/vincetrien-ngo/ECE178-FPGAEthernetComm/blob/master/img/blockdiagram.PNG)
![OSI Model Image](https://github.com/vincetrien-ngo/ECE178-FPGAEthernetComm/blob/master/img/qsysblock.PNG)