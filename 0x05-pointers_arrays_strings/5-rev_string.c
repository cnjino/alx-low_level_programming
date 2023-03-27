#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string in question
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a = 0;

	for (a = 0; a <= -1; a--)
	{
		_putchar(s[a]);
		a--;
	}
	return (0);
}
