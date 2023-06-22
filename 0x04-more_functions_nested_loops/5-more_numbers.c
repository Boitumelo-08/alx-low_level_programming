#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int num = 0;

	for (x = 0; x < 10; x++)
	{
		while (num < 15)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		num = 0;
		_putchar('\n');
	}
}
				
