#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
