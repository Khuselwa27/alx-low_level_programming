#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -This returns the sum of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: This is the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This returns the difference of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: And the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This returns the product of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
