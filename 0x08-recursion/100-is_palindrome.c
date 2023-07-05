#include "main.h"
/**
 * len_checker - obtains length of a string
 * @s: string to be checked
 * Return: length of string
 */
int len_checker(char *s)
{
	if (s[0] != '\0')
		return (1 + len_checker(s + 1));
	return (0);
}
/**
 * pal_checker - check if s is palindrome
 * @s: string base 
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 otherwise
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string base address
 * Return: 1 if success, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, len_checker(s) - 1));
}
