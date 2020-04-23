
#include "sys/alt_stdio.h"
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "io.h"
#include "system.h"
#include "sys/alt_irq.h"
#include "alt_types.h"
#include <stdio.h>
#include <unistd.h>
#include <time.h>

volatile int greenled = 0x000030a0;
volatile int redled = 0x000030b0;
volatile int switch_base = 0x00000020;
volatile int pushbutton = 0x00003000;
volatile int seg7_0 = 0x00003080;
volatile int seg7_1 = 0x00003070;
volatile int seg7_2 = 0x00003060;
volatile int seg7_3 = 0x00003050;
volatile int seg7_4 = 0x00003010;
volatile int seg7_5 = 0x00003020;
volatile int seg7_6 = 0x00003030;
volatile int seg7_7 = 0x00003040;
#define SEGZERO 0b11000000
#define SEGONE 0b11111001
#define SEGTWO 0b10100100
#define SEGTHREE 0b10110000
#define SEGFOUR 0b10011001
#define SEGFIVE 0b10010010
#define SEGSIX 0b10000010
#define SEGSEVEN 0b11111000
#define SEGEIGHT 0b10000000
#define SEGNINE 0b10011000
#define SEGCLEAR 0b11111111
int SEGARR[] = {SEGZERO, SEGONE, SEGTWO, SEGTHREE, SEGFOUR, SEGFIVE, SEGSIX, SEGSEVEN, SEGEIGHT, SEGNINE};
void key1 () ;
void key2 () ;
void key3 () ;
void cleardisp();
void int_handler();
void init_key();
void delay();
volatile int edge_capture; //value for interrupt handler

int main(){
	cleardisp(); //clear all displays
	init_key(); //initialize button interrupt
	while (1){	//infinite while loop, to be interrupted

	}
  return 0;
}


void delay (){ //simple delay for patterns
	for (int i=0;i<500000;i++);
}

void int_handler(void* test){
	volatile int* edge_capture_ptr=(volatile int*) test; //make sure edge cap is vol int
	*edge_capture_ptr=IORD_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton); //read edge capture reg
	if (*edge_capture_ptr==2){ //edge cap reads as active high
		key1();
	}
	if (*edge_capture_ptr==4){
		key2();
	}
	if (*edge_capture_ptr==8){
		key3();
	}
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton, 0); //reset before return
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton);
	return;
}

void init_key() { //initialize interrupts
	void* edge_capture_ptr=(void*)&edge_capture;
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(pushbutton, 0xE); //mask to block key0 0xE = 1110
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton, 0);	//reset edge cap
	alt_irq_register(PUSHB_IRQ, edge_capture_ptr, int_handler); //register pushbutton as interrupt
}

void cleardisp(){ //clear all displays, 7seg, redled, and gled
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_0,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_1,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_2,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_3,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_4,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_5,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_6,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_7,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(redled, 0b0);
	IOWR_ALTERA_AVALON_PIO_DATA(greenled, 0b0);
}

void key1 () { //redled pattern
	printf("Key 1 interrupt: Red LED pattern");
	int temp = 0b01;
	for (int i=0; i<17; i++){ //shifts all the way to left
		IOWR_ALTERA_AVALON_PIO_DATA(redled, temp);
		temp = temp << 1;
		delay();
	}
	for (int i=0; i<17; i++){ //shift back to right
	IOWR_ALTERA_AVALON_PIO_DATA(redled, temp);
	temp = temp >> 1;
	delay();
	}
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton,0);
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton);
	cleardisp();
	return;
}

void key2 () { //green pattern
	printf("Key 2 interrupt: Green LED pattern");
	int temp = 0b01;
	for (int i=0; i<7; i++){ //shift all the way to left
		IOWR_ALTERA_AVALON_PIO_DATA(greenled, temp);
		temp = temp << 1;
		delay();
	}
	for (int i=0; i<8; i++){ //shift back to right
	IOWR_ALTERA_AVALON_PIO_DATA(greenled, temp);
	temp = temp >> 1;
	delay();
		}
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton,0);
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton);
	cleardisp();
	return;
}

void key3 () { //seven seg
	printf("Key 3 interrupt: 7 Segment Display pattern");
	for (int i=9; i>=0; i--){ //count down from nine
		IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGARR[i]); //array filled with numbers already sorted for count down
		usleep(500000);
	}
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton,0);
	IORD_ALTERA_AVALON_PIO_EDGE_CAP(pushbutton);
	cleardisp();
	return;
}


