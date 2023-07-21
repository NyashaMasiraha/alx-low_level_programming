#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Description: adds two numbers and return the sum
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Description: subtracts one number from another and returns the difference
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: first number.
 * @b: second number.
 * Description: multiplies two numbers and returns the product
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns result of the division of two given numbers
 * @a: first number.
 * @b: second number.
 * Description: devides one number with the other and returns result
 * Return: result of division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Description: divides one number with the other and returns the remainder
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

