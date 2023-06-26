#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first integer
 * @b: the second inteer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
