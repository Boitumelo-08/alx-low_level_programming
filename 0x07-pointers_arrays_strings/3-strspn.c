#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string 
 * @accept: source of bytes to be assessed
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	int matches = 0;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				matches++;
				break;
			}
			if (accept[y + 1] == '\0' && s[x] != accept[y])
				return (matches);
		}
		x++;
	}
	return (matches);
}

