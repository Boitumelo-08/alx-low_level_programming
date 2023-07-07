#include <stdio.h>
/**
 * main - check the code
 * @argc: size of argv array
 * @argv: array
 * Return: void
 */
int main(int argc, char **argv)
{
	if (*argv[0] > 0)
		printf("%i\n", argc - 1);
	return (0);
}
