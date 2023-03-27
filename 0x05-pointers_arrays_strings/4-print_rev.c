#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string in question
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
