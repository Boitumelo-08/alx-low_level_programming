#include "main.h"
/**
 * leet - encodes a string into 1337
 * @l: input string
 * Return:  pointer to dest
 */

char *leet(char *l)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(l + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(l + count) == low_letters[i] || *(l + count) == upp_letters[i])
			{
				*(l + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (l);
}
