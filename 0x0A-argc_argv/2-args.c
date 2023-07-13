#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc : arguments count
 * @argv : argument array
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}


