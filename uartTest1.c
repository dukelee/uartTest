#include <stdio.h>
#include "global.h"

unsigned char tx_buffer[20];
unsigned char *p_tx_buffer;
 
int main(int argc, char *argv[])
{
	init(argv[1]);
		//----- TX BYTES -----
	if (uart0_filestream != -1)
	{
		//int count = write(uart0_filestream, &tx_buffer[0], (p_tx_buffer - &tx_buffer[0]));		//Filestream, bytes to write, number of bytes to write
		//if (count < 0)
		//{
			fprintf(stderr,"UART TX PROCESSING\n");
		//}
	}
	
	closeDevice();
	return 0;

}
