#include "main.h"
/**
 * _strstr - main
 * @haystack: member
 * @needle: member
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; i < haystack[i]; i++)
	{
		if (haystack[i] != '\0')
		{
			for (j = 0; j < needle[j]; j++)
			{
				if ( needle[j] == haystack[i])
				{
					return (needle);
					break;
				}
			}
		}
	}
	return (0);
}
