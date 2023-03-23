#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: return value to be determined
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z', c++)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
