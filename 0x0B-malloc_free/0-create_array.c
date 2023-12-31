#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates array of characters
 * @size: size of array
 * @c: character to initialize
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	*(s + i) = '\0';

	return (s);
}
