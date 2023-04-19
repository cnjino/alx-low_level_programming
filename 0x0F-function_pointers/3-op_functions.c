#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtraction of two numbers
 * @a: first number
 * @b: seconf number
 * Return: difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: Division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
