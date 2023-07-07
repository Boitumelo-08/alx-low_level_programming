#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts the number of parameters
 * @argv: pointer array
 * Return: Always success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		prinf("%s\n", *argv);
	return (0);
}
