#include "variadic_funtions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list myList;

	va_start(myList, n);

	for (counter = 1; counter <= n; counter++)
	{
		printf("%i", va_arg(myList, int));
		if (counter < n && separator)
		{
			printf("%s", separator);
		}
		else
		{
			;
		}
	}
	printf("\n");
	va_end(myList);
}
