#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string in question
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
	b = (a - 1) / 2;
	b += 1;
	}
	else
	{
	b = a / 2;
	}

	for (; b < a; b++)
	{
	_putchar(str[b]);
	}
	_putchar('\n');
}

