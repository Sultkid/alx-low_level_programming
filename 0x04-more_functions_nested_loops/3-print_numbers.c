#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int c;

	while (c >= 48 && c <= 57)
	{
		_putchar(c);
		c++
	}
	_putchar('\n');
}
