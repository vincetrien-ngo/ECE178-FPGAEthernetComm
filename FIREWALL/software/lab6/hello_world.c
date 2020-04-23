
#include "sys/alt_stdio.h"
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"
#include "io.h"
#include "system.h"
#include "sys/alt_irq.h"
#include "alt_types.h"
#include <stdio.h>
#include <unistd.h>
#include <time.h>

volatile int greenled = 0x000030a0;
volatile int switch_base = 0x00003090;
volatile int pushbutton = 0x00003000;
volatile int timer_base = 0x0000000;
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
//7,11,13,14,15
void key0 () ;
void key1 () ;
void key2 () ;
void key3 () ;
void clear7seg();

int main(){
	int but;
	clear7seg();
	//IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGTHREE);
	IOWR_ALTERA_AVALON_TIMER_PERIODH(timer_base, 2000); //500 ms
	IOWR_ALTERA_AVALON_TIMER_CONTROL(timer_base,0b1000); //stop
	IOWR_ALTERA_AVALON_TIMER_CONTROL(timer_base,0b100);  //start
	IOWR_ALTERA_AVALON_TIMER_STATUS(timer_base, 0b00);
	int i = 0;
	while(1){		//test while loop for timer
		//IOWR_ALTERA_AVALON_TIMER_CONTROL(timer_base,0b100);  //start
		printf("%d\n",IORD_ALTERA_AVALON_TIMER_SNAPH(timer_base));
		if (IORD_ALTERA_AVALON_TIMER_STATUS(timer_base) == 0b00){
			i++;
			printf("i = %d", i);
			if (i >= 10){
				i = 0;
			}
		}
		IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGARR[i]);
	}

  while(1) {
	  but = IORD_ALTERA_AVALON_PIO_DATA(pushbutton);
	  if (but == 14) {	//value of key0
		 // printf("calling key0\n");
		   key0();
	  }
	  else if (but == 13){	//value of key1
		 // printf("calling key1\n");
		  key1();
	  }
	  else if (but == 11) {	//value of key2
		//  printf("calling key2\n");
		  key2();
	  }
	  else if (but == 7) {	//value of key3
		 // printf("calling key3\n");
		  key3();
	  }
  }
  return 0;
}

void clear7seg(){
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_0,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_1,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_2,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_3,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_4,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_5,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_6,SEGCLEAR);
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_7,SEGCLEAR);
}

void key0 () {		//sets seg7_0 to 0
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGONE);
	return;
}

void key1 () {
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGZERO);
	return;
}

void key2 () {
	for (int i=0; i<10; i++){
		IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGARR[i]);
		usleep(500000);
	}
	return;
}

void key3 () {
	for (int i=9; i>=0; i--){
		IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGARR[i]);
		usleep(500000);
	}
	return;
}

