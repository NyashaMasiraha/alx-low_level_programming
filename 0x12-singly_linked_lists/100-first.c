#include <stdio.h>

/**
 * print_before_main - prints a statement before the main function is executed
 * description: a function that prints a statement
 * return: Always (0)
 */

void first(void)__attribute__((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
