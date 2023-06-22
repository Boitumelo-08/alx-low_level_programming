#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long x;
	long y = 612852475143;

	for (x = 2; x < y; x++)
	{
		if (y % x == 0)
			y = y / x;
	}
	printf("%li\n", y);
	return (0);
}
