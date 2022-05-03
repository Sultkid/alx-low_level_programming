#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: character to be checked
 * Return: 1 if character is uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
