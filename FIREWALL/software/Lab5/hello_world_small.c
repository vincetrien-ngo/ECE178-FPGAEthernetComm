/* 
 * "Small Hello World" example. 
 * 
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example 
 * designs. It requires a STDOUT  device in your system's hardware. 
 *
 * The purpose of this example is to demonstrate the smallest possible Hello 
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard 
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete 
 * description.
 * 
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION 
 *      This removes software exception handling, which means that you cannot 
 *      run code compiled for Nios II cpu with a hardware multiplier on a core 
 *      without a the multiply unit. Check the Nios II Software Developers 
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks  
 *      support for buffering, file IO, floating point and getch(), etc. 
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program 
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */
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
#include "altera_avalon_timer_regs.h"

volatile int greenled = 0x000030a0;
volatile int switch_base = 0x00003090;
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
//7,11,13,14,15
void key0 () ;
void key1 () ;
void key2 () ;
void key3 () ;
void clear7seg();

int main(){
	int but;
	clear7seg();
	IOWR_ALTERA_AVALON_PIO_DATA(seg7_0, SEGTHREE);

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

