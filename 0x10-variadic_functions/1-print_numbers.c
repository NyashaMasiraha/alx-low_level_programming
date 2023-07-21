#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n:  number of integers passed to the function
 * @...: variable of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (j != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}



