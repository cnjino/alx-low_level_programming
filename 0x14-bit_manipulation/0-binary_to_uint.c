#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal_variable = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal_variable = 2 * decimal_variable + (b[a] - '0');
	}
	return (decimal_variable);
}
