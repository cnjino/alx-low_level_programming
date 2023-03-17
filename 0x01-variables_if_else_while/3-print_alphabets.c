#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
