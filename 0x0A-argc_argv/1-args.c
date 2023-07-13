#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *@argc : number of arguments
 *@argv : array of arguments
 *return : 0 Always
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
