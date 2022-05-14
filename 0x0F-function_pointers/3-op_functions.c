#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition
 * @a: member
 * @b: meber
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 *  * op_sub - subtract
 *   * @a: member
 *    * @b: member
 *     * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  * op_mul - multiply
 *   * @a: member
 *    * @b: member
 *     * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  * op_mod - modulus
 *   * @a: member
 *    * @b: member
 *     * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 *  * op_div - division
 *   * @a: member
 *    * @b: member
 *     * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
