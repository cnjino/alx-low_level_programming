#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination code
 * @src: source code
 * @n: interger parameter
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
