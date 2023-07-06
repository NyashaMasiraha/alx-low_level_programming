#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @n: number input
 * @i: iterator
 * Return: Actual square root
 */
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number input
 * Return: natural square root of n or -1 if there is no natural square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

