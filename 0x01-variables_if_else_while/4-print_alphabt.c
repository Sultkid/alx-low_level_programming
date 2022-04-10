#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
