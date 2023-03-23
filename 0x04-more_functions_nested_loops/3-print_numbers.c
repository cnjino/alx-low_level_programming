#include "main.h"

/**
 * print_numbers - print numbers from 0 up to 9.
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		_putchar(ch + '0');
	}
	_putchar('\n');
}
