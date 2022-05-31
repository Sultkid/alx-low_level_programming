#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert bin to unit
 * @b: bin to be converted
 * Return: converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num <<= 1;
			num += b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (num);
}
