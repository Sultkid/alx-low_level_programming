#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calc function
 * @argc: arg count
 * @argv: arg vector
 * Return: answer
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*calculator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	calculator = get_op_func(argv[2]);
	if (calculator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", calculator(a, b));
	return (0);
}
