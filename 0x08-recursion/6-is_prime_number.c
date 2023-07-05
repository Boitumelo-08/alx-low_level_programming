#include "main.h"
/**
 * multiples - find multiples of n
 * @n: base
 * @i: iterator
 * Return: 1 if n is prim and 0 otherwise
 */

int multiples(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (multiples(n, i + 1));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: base
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (multiples(n, 2));
}
