#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: digit checked
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
