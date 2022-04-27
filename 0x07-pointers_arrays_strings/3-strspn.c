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
	for (i = 0; i <= accept[i]; i++)
	{
		for (count = 0; count < s[count]; count++)
		{
			if ((s[count] == accept[i]) && s[count] != '\0')
			{
				num++;
			}
		}
	}
	num -= 2;
	return (num);
}
