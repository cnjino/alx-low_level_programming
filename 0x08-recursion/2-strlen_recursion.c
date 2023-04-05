#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: input of the char string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit += _strlen_recursion(s + 1);
		longit++;
	}
	return (longit);
}
