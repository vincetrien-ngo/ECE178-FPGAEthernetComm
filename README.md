# ECE178-FPGAEthernetComm

<h1>Abstract</h1>

A firewall can be defined as a network security device that monitors incoming and outgoing traffic with the ability to permit or block the flow of data based on a set of given security rules. The DE2-115 board has ethernet capabilities that allow for high-speed transmission of data. The FPGA board has two ethernet ports that can be used to implement a firewall between two connected devices.

The intent of this project is to have two devices that will transmit sets of data between themselves, and to design and program a system on the DE2-115 FPGA board that will be able to examine data transmitted between devices and block certain data based on rules specified by the team. Data could be restricted based on pre-determined patterns of data, as well as identification from the transmitting devices. Another intent of this project is to be able to create a packet using the board and send any form of information to a device.

![OSI Model Image](https://github.com/vincetrien-ngo/ECE178-FPGAEthernetComm/blob/master/img/osimodel.PNG)
<h3>Figure 1: OSI Model, Where Ethernet Stands</h3>

In the OSI model ethernet is present in the first two layers. In Figure 1 it shows the Data Link layer and the Physical Layer being the ones that use ethernet. Though for the Data Link layer only half of it is used. The Media Access Control (MAC) sublayer while the entirelty of the physical layer is used. The other half of the Data Link layer is called the Logical Link Control (LLC) sublayer. The MAC controls the the starting of data transmission and it also handles failures when information fails to send. The LLC handles communication between layers above the Data Link layer (i.e the Network Layer above it and the Physical Layer below it). 

![OSI Model Image](https://github.com/vincetrien-ngo/ECE178-FPGAEthernetComm/blob/master/img/blockdiagram.PNG)
<h3>Figure 2: Block Diagram of the Triple-Speed Ethernet System</h3>

Figure 2 shows how the different components on the FPGA will interact with each other using a block diagram.

![OSI Model Image](https://github.com/vincetrien-ngo/ECE178-FPGAEthernetComm/blob/master/img/qsysblock.PNG)
<h3>Figure 3: Block Diagram of the Qsys Subsystem</h3>

Figure 3 shows the bloack diagram that will be created using Qsys. Triple-Speed ethernet can be found as a subsystem within Qsys.

<h1>Proposed Project:</h1>

We would like insert a DE2-115 FPGA board firewall between two computers transmitting data through an ethernet cable. We intend to explore simple transmission of data between computers, and build signatures from that transmission of packets we would like to restrict. We will build multiple signatures to show that the firewall is able to successfully block and allow specific traffic. The criteria for blocking traffic will be very simplified from a true production firewall, and will be based off of identification of the sending machine, and the pre-determined signatures. 
The system design will use the same system that has been designed in the classroom up to this point, with a few components added in Qsys. The Triple Speed Ethernet component, and two Scatter-Gather DMA Controllers, one for receiving and one for transmitting, and finally a descriptor memory. The descriptor memory serves as a memory dedicated for the ethernet data transmission, and can be used as a buffer for information to be stored while it is processed.
