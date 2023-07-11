#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * word_c - counts the number of words
 * @s: string
 * Return: int
 */

int word_c(char *s)
{
	int l, wc;

	l = 0, wc = 0;
	if (*(s + l) == ' ')
		l++;
	while (*(s + l))
	{
		if (*(s + l) == ' ' && *(s + l - 1) != ' ')
			wc++;
		if (*(s + l) != ' '  && *(s + l + 1) == 0)
			wc++;
		l++;
	}
	return (wc);
}
/**
 * trail_s - remove trailing whitespace
 * @st: string
 * Return: pointer
 */

char *trail_s(char *st)
{
	while (*st == ' ')
		st++;
	return (st);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: NULL on failure
 */

char **strtow(char *str)
{
	char **s, *ts;
	int l, l2, wc, i, j, fr, k;

	if (str == NULL || *str == 0)
		return (0);
	fr = 0;
	wc = word_c(str);
	if (wc == 0)
		return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	ts = trail_s(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(ts + l) != ' ' && *(ts + l) != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0, l2 = 0; l2 < l; l2++, j++)
			s[i][j] = *(ts + l2);
		s[i][j] = '\0';
		ts = trail_s(ts + l);
	}
	s[i] = NULL;
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}
