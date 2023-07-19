#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name
 * @name: a string that contains the name
 * @f: pointer to a funtion
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
