#include <stdio.h>
/**
 * main - finds and prints first 98 Fibonacci numbers, followed by new line
 * return: 0 (success)
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next;
	int count;

	printf("1, 2,");
	for (count = 3; count <= 98; ++count)
	{
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;

		printf("%lu", next);

		if (count != 98)
			printf(",");
	}
	printf("\n");

	return (0);
}

