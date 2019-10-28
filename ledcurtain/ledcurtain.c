#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
  DDRD=0XFF;
  while(1)
  {
     PORTD=0XFF;
	 _delay_ms(50);
	 PORTD=0XE7;
	 _delay_ms(50);
	 PORTD=0XC3;
	 _delay_ms(50);
	 PORTD=0X81;
     _delay_ms(100);
    PORTD=0X81;
	_delay_ms(50);
	PORTD=0X00;
	_delay_ms(100);
	PORTD=0X81;
	_delay_ms(50);
	PORTD=0XC3;
	_delay_ms(50);
	PORTD=0XE7;
	_delay_ms(50);
	

	}
}
