#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: a pointer to the file name of the file to create
 * @text_content: a pointer to a string to write to the file
 * Return: if the function fails --1 and otherwise returns -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 06600);
	Y = write(fd, text_content, len);

	if (fd == -1 || y == -1)
		return (-1);

	closed(fd);

	return (1);
}
