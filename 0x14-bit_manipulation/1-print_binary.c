#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, score = 0;
	unsigned long int status;

	for (i = 63; i >= 0; i--)
	{
		status = n >> i;

		if (status & 1)
		{
			_putchar('1');
			score++;
		}
		else if (score)
			_putchar('0');
	}
	if (!score)
		_putchare('0');
}
