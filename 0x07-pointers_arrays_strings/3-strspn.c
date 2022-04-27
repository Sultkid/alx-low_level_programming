#include "main.h"

/**
 * _strspn - main
 * @s: member
 * @accept: member
 * Return: num
 */

unsigned int _strspn(char *s, char *accept)
{
	int count, i;

	unsigned int num;

	num = 0;
	char *new;

	for (i = 0; i <= accept[i]; i++)
	{
		*new = accept[i];
		for (count = 0; count < s[count]; count++)
		{
			if ((s[count] == *new) && s[count] != '\0')
			{
				num++;
			}
		}
	}
	num -= 2;
	return (num);
}
