#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: the size of argv array
 * @argv: an array
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
