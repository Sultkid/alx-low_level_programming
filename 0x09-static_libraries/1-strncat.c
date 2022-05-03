#include "main.h"
/**
 * _strncat - main
 * @dest: member
 * @src: member
 * @n: member
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
