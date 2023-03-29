#include "main.h"
#include <stdio.h>

/**
 * *_strncat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the number of strings
 * Return: Destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
