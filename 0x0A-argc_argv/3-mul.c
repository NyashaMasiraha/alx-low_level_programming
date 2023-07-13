#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - a program that multiplies two numbers.
 * print the result of the multiplication, followed by a new line
 * @num1 : integer input
 * @num2 : integer input
 * Description: This function multiplies two integers and returns the result.
 * Return : result of multiplication
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 ** main - entry point for the program
 * @argc : number of arguments passed to the program
 * @argv : array of pointers to the arguments
 * Description: This program multiplies two numbers, prints the result
 *followed by a new line.
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
