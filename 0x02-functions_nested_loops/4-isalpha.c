#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: check char is alphabetic character
 * Return: 1 otherwise return 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
		return (1);
	else
		return (0);
}
