#include <stdio.h>

/**
 * print_square - print
 * @size: member
 */

int main (void)
{
	int size, i, k;
	
	size = 10;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
