#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: return 1 for success and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
