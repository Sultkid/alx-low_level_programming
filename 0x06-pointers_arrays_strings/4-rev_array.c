#include "main.h"

/**
 * reverse_array - main
 * @a: member
 * @n: number of items in array
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	for (i = 0; j = n - 1; i < j; i++; j--)
	{
		tmp = *(a + j);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
