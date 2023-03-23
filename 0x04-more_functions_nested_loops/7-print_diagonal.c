#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of lines to draw
 * Return: no return
 */

void print_diagonal(int n)
{

	int c, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	for (b = 0; b < c; b++)
	{
	_putchar(' ');
	}
	_putchar('/');
	_putchar('\n');
	}
	}
}
