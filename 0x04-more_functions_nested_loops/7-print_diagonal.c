#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: member
 */

void print_diagonal(int n)
{
	int mark, space;

	if (n > 0)
	{
		for (mark = 0; mark < n; mark++)
		{
			for (space = 0; space < mark; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
