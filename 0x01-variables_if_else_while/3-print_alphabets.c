#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Lower and then upper case
 * Return: Always (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putcahr(low);
	putchar('\n');

	return (0);
}
