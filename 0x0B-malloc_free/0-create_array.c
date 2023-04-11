#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the string input
 * Return: pointer on sucess and NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size)
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
