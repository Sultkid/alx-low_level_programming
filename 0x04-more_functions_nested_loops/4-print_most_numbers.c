#include "main.h"
/**
 * print_most_numbers - print
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ( i == 2 || i == 4)
		{}
		else{
			_putchar(i);
		}
	}
	_putchar('\n');
}
