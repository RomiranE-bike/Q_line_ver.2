/*
 * QLine+LCD+ADC.c
 *
 * Created: 7/27/2024 09:58:55
 * Author : me
 */ 
//---------------------------------------------------------------------------------------------
//#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "LCD.h"
#include "stepper.h"
#include "io.h"
#include "beep.h"
//---------------------------------------------------------------------------------------------
int main(void){
	
	
	io_init();
	Reset();
	lcd_init();
	_delay_ms(200);
	Clear();
	_delay_ms(200);
	beep();

			while(1){
				
				
					if((button_PIN &(1<<up_key))==0){turn_Up();}

					else if((button_PIN &(1<<down_key))==0){turn_Down();}

					else if((button_PIN &(1<<right_key))==0){turn_Right();}

					else if((button_PIN &(1<<left_key))==0){turn_Left();}

					else if((key_PIN &(1<<start_key))==0){Start();}

					else {Stop();}							
			}//end of while
}
//---------------------------------------------------------------------------------------------


