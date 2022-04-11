#include <stdio.h>

/**
 * main - Entry point
 * Return: ALways 0 (success)
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 57)
		{
			putchar(x);
		}
		else
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
