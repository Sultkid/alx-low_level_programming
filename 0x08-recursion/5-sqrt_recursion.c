#include "main.h"
/**
 * value - main
 * @n: member
 * value - evaluation
 * @i: member
 * Return: value
 */
int value(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (value(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}

/**
 *  *_sqrt_recursion - evaluate sqrt
 *   *@u: interger
 *    *Return: Sgrt_recursion
 */

int _sqrt_recursion(int u)
{
	int i = 0;

	if (i < 0) /*If n is negative*/
		return (-1);

	else
	{
		return (value(i, u)); /*Recursive call*/
	}

}
