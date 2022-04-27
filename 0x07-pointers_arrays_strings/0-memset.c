#include "main.h"
/**
 * _memset - main function
 * @s: member
 * @b: member
 * @n: member
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
