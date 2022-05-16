#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main entry
 * @n: number of arg
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, n);
	int sum = 0, i;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return sum;
}
