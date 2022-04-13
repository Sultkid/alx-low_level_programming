#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		print_alphabet(_putchar(x));
	}
	_putchar('\n);
	return (0);
}
