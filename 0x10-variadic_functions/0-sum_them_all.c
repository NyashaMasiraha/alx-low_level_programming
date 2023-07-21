#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a fucntion that returns sum of all its paramters
 * @n: number of paramters passed to the function
 * @...: variable number of paramters to calculate the sum of.
 * Description: adds all the parameters together and return the sum
 * Return: 0 if zero parameters were passed, else return sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	va_start(ap, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

