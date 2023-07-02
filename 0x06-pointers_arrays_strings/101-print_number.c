#include "main.h"

/**
 * print_number - a fucntion that prints integers
 * @n: integer parameter
 * Return: 0
 */

void print_number(int n)
{
	int reserved = 0;
	int digit = 0;
	int isNegative = 0;

	if (n < 0)
	{
		isNegative = 1;
		n = -n;
	}

	while (n > 0)
	{
		digit = n % 10;
		reserved = reserved * 10 + digit;
		n /= 10;

	}
	if (reserved == 0)
	{
		_putchar('0');
	}
	while (reserved > 0)
	{
		_putchar(reserved % 10 + '0');
		reserved /= 10;
	}
	if (isNegative)
	{
		_putchar('-');
	}
	_putchar('\0');
}
