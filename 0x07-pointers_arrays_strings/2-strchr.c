#include "main.h"

/**
 * _strchr - main function
 * @c: member
 * @s: member
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < s[i]; i++)
	{
		if (s[i] != '\0' && s[i] != c)
		{
			continue;
		}
		return (s + i);
		if (s[i] != c)
			return (s);
	}
	return (0);
}
