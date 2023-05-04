#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	size_t len = strlen(b);
	unsigned int result = 0;

	for (size_t i = 0; i < len; i++)
	{
	if (b[i] == '0' || b[i] == '1')
	{
		result = (result << 1) + (b[i] - '0');
	}
	else
	{
		return (0);
	}
	}

	return (result);
}
