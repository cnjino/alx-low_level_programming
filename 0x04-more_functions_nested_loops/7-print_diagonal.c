#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of lines to draw
 * Return: no return
 */

void print_diagonal(int n)
{

	int c;
	
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	_putchar('/');
	}
	_putchar('\n');
									        }
}
