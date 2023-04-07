#include <unistd.h>

/**
 *  _putchar - writes the character c stdout
 *  @c: The character to print
 *  Return: Return 1 on success and -1 or error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
