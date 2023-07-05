#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: 1 on succes and -1 on error
 */

int _sqrt_recursion(int n)
{
	int sqrt(int a, int b);
	{
		if (b * b == a)
			return (b);
		else if (b * b > a)
			return (-1);
		return (sqrt(a, b + 1));
	}
	return (sqrt(n, 1));
}
