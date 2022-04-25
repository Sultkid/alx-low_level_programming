#include "main.h"

/**
 * reverse_array - main
 * @a: member
 * @n: number of items in array
 */
void reverse_array(int *a, int n)
{
	int *start, *end, c;
	int i;


	start = a;
	end = a;


	for (i = 0; i < n - 1; i++)
	{
		end++;
	}




	for (i = 0; i < n / 2; i++)
	{


		c = *end;
		*end = *start;
		*start = c;

		start++;
		end--;
	}
}
