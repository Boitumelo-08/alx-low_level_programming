#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: first number to be added
 * @b: second number to be added
 * Return: summ of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: the first number
 * @b: the second number
 * Return: the quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
