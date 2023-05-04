#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (63);

	int printed = 0;

	for (; mask != 0; mask >>= 1)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}
	if (!printed)
	{
		_putchar('0');
	}
}

