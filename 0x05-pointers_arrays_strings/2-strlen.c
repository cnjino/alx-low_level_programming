#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string in question
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++)
		a++;
	return (a);
}
