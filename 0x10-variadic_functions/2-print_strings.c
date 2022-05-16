#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings.
 * @separator: separarator
 * @n: arg nummber
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *test;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		test = va_arg(arg, char *);
		if (test != NULL)
			printf("%s", test);
		else
		{
			printf("%s", "(nil)");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
