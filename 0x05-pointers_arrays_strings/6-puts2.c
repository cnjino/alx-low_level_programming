#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string in question
 * Return: Always 0.
 */

void puts2(char *str)
{
	int b;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[a]);
	}
		_putchar('\n');
}
