#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints all possible combinations of single digit numbers
 * Return: Always (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putcahr(' ');
	}
	}
	putchar('\n');
	return (0);
}
