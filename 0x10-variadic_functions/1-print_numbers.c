#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers witgh seperataor
 * @n: number of arg
 * @separator: seperate integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
