#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: ALways 0 (success)
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
