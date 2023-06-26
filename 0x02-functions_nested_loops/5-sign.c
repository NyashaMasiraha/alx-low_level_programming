#include "main.h"
/**
 * print_sign - check if the number is greater, less or equal to zero
 * @n: The number as an integer
 * return: 1 is greater than zero, 0 equal to zero, -1 less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
