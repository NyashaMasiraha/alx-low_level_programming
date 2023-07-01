#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program that generates random valid password
 * return: 0 Always
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += pass[i];
		putchar(pass[i] + 33);

		if ((2772 - sum) < 78)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n + 33);
			break;
		}
	}
	return (0);
}
