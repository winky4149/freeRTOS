/*
 * uart.c
 *
 *  Created on: Feb 3, 2023
 *      Author: npedu030
 */

#include "uart.h"
#include <stdio.h>


extern UART_HandleTypeDef huart1;

int _write(int file, char *p, int len)
{
	HAL_UART_Transmit(&huart1, p, len, 1);
	return len;
}

int sud(int i, int j)
{
	for (i=1; i < 10; i++)
	{
		for (j=1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}
