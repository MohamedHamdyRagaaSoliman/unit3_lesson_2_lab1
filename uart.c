#include"uart.h"
#define UART0DR *((volatile unsigned int* const)((unsigned int *)0x101f1000))
void uart_s_s(unsigned char *p_s_s)
{
	while(*p_s_s !='\0')
	{
		UART0DR = (unsigned int) (*p_s_s);
		p_s_s++;
	}
}