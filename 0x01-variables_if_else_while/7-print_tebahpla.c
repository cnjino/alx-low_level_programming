#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints all single digit number of base 10 starting from 0
 * Return: Always 0.
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
