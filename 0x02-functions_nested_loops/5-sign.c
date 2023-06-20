#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked
 * Return: 1 for positive, -1 for negative or else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
