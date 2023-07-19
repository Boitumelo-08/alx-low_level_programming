#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter 
 * on each element of an array
 * @array: array to pass
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(action) (array[c]);
		}
	}
}
