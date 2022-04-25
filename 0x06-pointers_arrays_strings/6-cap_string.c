#include "main.h"

/**
 * cap_string - main
 * @s: member
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;

	char arr[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				continue;
			}
		}
		for (j = 0; j < arr[j] && arr[j] != '\0'; j++)
		{
			if (s[i] == arr[j] || s[i] == ' ')
			{
				++i;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
					continue;
				}
			}
		}
	}
	return (s);
}
