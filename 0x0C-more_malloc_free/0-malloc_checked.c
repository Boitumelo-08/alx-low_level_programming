#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
