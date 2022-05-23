#include "LEDS.h"


#include <avr/io.h>


int main(void)
{
    uint8_t  lds[16]={A0,A1,A2,A3,A4,A5,A6,A7,B0,B1,B2,B3,B4,B5,B6,B7};
	//led_pattern5(lds,16);
    while (1) 
    {
	led_pattern1(lds,16);
		led_pattern2(lds,16);
		led_pattern3(lds,16);
		led_pattern4(lds,16);
	led_pattern5(lds,16);
		led_pattern6(lds,16);
		led_pattern7(lds,16);
		led_pattern8(lds,16);
    }
}

