#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the variable
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

