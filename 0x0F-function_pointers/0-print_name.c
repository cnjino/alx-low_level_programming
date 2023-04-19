#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name.
 * @name: name of the person
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
	return (0);
}
