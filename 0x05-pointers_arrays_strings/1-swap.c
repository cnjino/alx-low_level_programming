#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two intergers
 * @a: value of first interger
 * @b: value of second interger
 * Result: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
