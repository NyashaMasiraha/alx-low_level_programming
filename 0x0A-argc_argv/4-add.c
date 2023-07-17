#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - a program that checks if the number is positive or negative
 * @str : strng input
 * @char : character array
 * description :program checks if the number sis positive or negative
 * Return: result, 0 if no numbers are passed, else print error followed by 1
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - program adds positive numbers only and prints result
 * @argc: Count arguments
 * @argv: Arguments
 * Description: this program add positive numbers only
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{

			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	count++;

	printf("%d\n", sum);
	return (0);
}
