#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string in question
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int a;

	while (s[counter] != '\0')
		counter++;
	for (a = 0; a < counter; a++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
