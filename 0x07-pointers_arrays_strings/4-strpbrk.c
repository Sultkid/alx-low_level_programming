#include "main.h"
/**
 * _strpbrk - main
 * @s: member
 * @accept: member
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == *s)
			{
				return (s);
				continue;
			}
			j++;
		}
		s++;
	}
	return (0);
}
