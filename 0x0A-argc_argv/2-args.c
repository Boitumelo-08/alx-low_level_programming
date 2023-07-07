#include <stdio.h>
/**
 * main - check the code
 * @argc: the size of argv array
 * @argv: the array
 * Return: void
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
