#include "main.h"
/**
 * _strcat - concatenate strings
 * @dest: member
 * @src: member
 * @*_strcat: main
 * Return: member dest
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
