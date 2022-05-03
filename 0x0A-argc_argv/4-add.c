#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add
 * @argc: arg count
 * @argv: arg vector
 * Return: add
 */

int main(int argc, char *argv[])
{
	int add, i, j;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGJIJKLMNOPQRSTUVWXYZ";

	add = 0;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; j < alp[j]; j++)
			{
			if (*argv[i] == alp[j])
			{
				printf("%s\n", "Error");
				return (1);
			}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
