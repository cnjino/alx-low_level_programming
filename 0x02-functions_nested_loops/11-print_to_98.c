#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number printed
 * Return: the value of n
 */

void print_to_98(int n)
{
	if (n >= 99)
	{
		while (n > 99)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 99)
			printf("%d, ", n++);
	}
}
