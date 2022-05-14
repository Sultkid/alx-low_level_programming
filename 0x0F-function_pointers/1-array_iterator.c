#include "function_pointers.h"
/**
 * array_iterator - function
 * @size: size of array
 * @action: pointer to func
 * @array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++;)
		{
			action(array[i]);
		}
	}
}
