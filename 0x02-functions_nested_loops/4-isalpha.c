#include "main.h"

/**
 * _isalpha - Checks the alphabetic character
 * @c: Character to be checked
 * Return: 1 for alphabetic character or else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}