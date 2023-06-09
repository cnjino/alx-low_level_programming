#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of a program
 * @ac: integer input
 * @av: double pointer array
 * Return: Pointer to the new string on success and error if NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	str = malloc(sizeof(char) * (len + ac + 1));

	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
