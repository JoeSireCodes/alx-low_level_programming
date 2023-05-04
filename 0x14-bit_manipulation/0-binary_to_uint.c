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
	return (0);

	unsigned int result = 0;

	for (; *b != '\0'; ++b)

	{
		if (*b < '0' || *b > '1')
		return (0);

		result = 2 * result + (*b - '0');
	}

	return (result);
}
