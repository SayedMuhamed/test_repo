#include <stdio.h>
#include <util/delay.h>
#include <avr/io.h>

#define F_CPU 8000000UL



int main (void){
	DDRA = 0b00000001;
	while(1){
		PORTA = 0x01;
		_delay_ms(500);
		PORTA = 0x00;
		_delay_ms(500);
	}




	return 0;

}
