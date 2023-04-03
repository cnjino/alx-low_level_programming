#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: size of memory
 * @b: address of the memory
 * @n: the interger parameter
 * Return: Return s
 */

char *_memset(char *s, char b, unsigned int n)
{
        char *ptr = s;

        while (n-- > 0)
        {
                *ptr++ = b;
        }
        return (s);
}
