/*
 * GccApplication1.c
 *
 
 * Author : Usuario
 */ 

#include <avr/io.h>
#include <UART.h>

int main(void)
{
   DDRC |= (1<<0)|(1<<1);
   
   UART_init();
   UART_write_txt("valor de potenciometro 1 o 2\n\r");
   UART_write_txt("digite 1 o 2\n\r");
   
   uint8_t num=0;
    while (1) 
    {
		num= UART_read();
		 UART_read(DDRC);
		
		if (num !=0){
			
			switch(num){
				case '1':
				PORTC= (1<<0);
				UART_write_txt("valor del potenciometro 1:\n\r");
				UART_write(DDRC);
				break;
				
				case '2':
				PORTC= (1<<1);
				UART_write_txt("valor del potenciometro 2:\n\r");
				UART_write(DDRC);
				break;
				
    }
}
	}
}
