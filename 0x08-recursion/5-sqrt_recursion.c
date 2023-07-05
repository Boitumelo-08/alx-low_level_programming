#include "main.h"
/**
 * square_root - makes possible to check from 1 to n
 * @a: integer
 * @b: iterator
 * Return: 1 on succes, otherwise 0
 */

int square_root(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: 1 on succes and -1 on error
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
