#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string 
 * @accept: source of bytes to be assessed
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y, z;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] != 32)
		{
			for (z = 0; accept[z] != '\0'; z++)
			{
				if (s[y] == accept[z])
					x++;
			}
		}
		else
			return (x);
	}
	return (x);

}
