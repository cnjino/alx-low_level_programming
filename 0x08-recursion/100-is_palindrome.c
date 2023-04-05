#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to reverse
 * Return: returns 1 if it is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_pal(s, 0, _strlen_recursion(s)));
	}
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to input
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursions(s + 1));
	}
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to input
 * @i: iterator input
 * @len: length of the string
 * Return: returns 1 if palindrome and 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	else
	{
		return (check_pals(s, i + 1, len - 1));
	}
}
