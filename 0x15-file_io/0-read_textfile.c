#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file prints to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0,and
 * filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(fd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(fd);
	return (x);
}
