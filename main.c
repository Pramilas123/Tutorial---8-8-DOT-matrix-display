/*
 * STEP1.c
 *
 * Created: 5/14/2022 11:48:37 AM
 * Author :AA2187
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "max7219.h"

int all[9][8] = {{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,1}};
int main(void)
{   MAX7219_init();
    MAX7219_set_row(1,0b01111100);
	MAX7219_set_column(4,0b01111110);//For T
	_delay_ms(80);
	MAX7219_clear();
	MAX7219_set_row(1,0b01111110);
	MAX7219_set_row(3,0b01111110);
	MAX7219_set_row(6,0b01111110);
	MAX7219_set_column(6,0b01111110);//ForE
	_delay_ms(80);
	MAX7219_clear();
	MAX7219_set_row(1,0b01111100);
	MAX7219_set_column(4,0b01111110);//For T
	_delay_ms(80);
	MAX7219_clear();
	MAX7219_set_row(1,0b01111000);
	MAX7219_set_row(2,0b01000100);
	MAX7219_set_row(3,0b01111000);
	MAX7219_set_column(6,0b01111110);
	MAX7219_set_row(4,0b01100000);
	MAX7219_set_row(5,0b01010000);
	MAX7219_set_row(6,0b01001000);//For R
	_delay_ms(80);
	MAX7219_clear();
	MAX7219_set_row(1,0b01111100);
	MAX7219_set_column(4,0b01111110);//For I
	MAX7219_set_row(6,0b01111100);
	_delay_ms(80);
	MAX7219_clear();
	MAX7219_set_row(1,0b01111110);
	MAX7219_set_row(3,0b01111110);
	MAX7219_set_row(4,0b00000010);
	MAX7219_set_row(5,0b00000010);
	MAX7219_set_row(6,0b01111110);
	MAX7219_set_column(6,0b01001110);//For S
	_delay_ms(80);	
}


