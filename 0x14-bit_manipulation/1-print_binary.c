#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int leading_zeroes = 1;

	for (int i = 0; i < bits; ++i)
	{
	if (n & mask)
	{
	putchar('1');
	leading_zeroes = 0;
	}

	else if (!leading_zeroes)
	{
	putchar('0');
	}

	mask >>= 1;
	}

	if (leading_zeroes)

	putchar('0');
}
