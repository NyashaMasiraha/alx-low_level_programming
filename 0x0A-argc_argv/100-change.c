#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, coins, i;
	int denominations[] = { 25, 10, 5, 2, 1 };
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < denominations; i++)

	coins += cents / denominations[i];
	cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
