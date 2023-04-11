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
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len += ac;
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		(str[k] == '\0');
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
