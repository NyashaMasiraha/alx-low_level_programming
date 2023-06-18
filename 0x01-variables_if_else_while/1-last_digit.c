#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Entry point
 *Description: prints out the last digit of the number
 *Return: Always 0
 */

int (main); void(ld),
{
	int n,
	int ld,

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
	printf("Last didit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
	printf("Last digit of %d is %d and is equals to 0", n, ld);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
