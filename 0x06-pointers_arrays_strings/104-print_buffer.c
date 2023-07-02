#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
		printf("\n");
	return;
}
	 int i, j;
	for (i = 0; i < size; i += 10)
		printf("%08x ", i);
	for (j = 0; j < 10; j += 2)
	if (i + j < size)
		printf("%02x", b[i + j]);
	if (i + j + 1 < size)
		printf("%02x", b[i + j + 1]);
	else
		printf("  ");
                printf("  ");
	else
		printf("   ");
	for (j = 0; j < 10 && i + j < size; j++)
	if (isprint(b[i + j]))
		printf("%c", b[i + j);
	else
		printf(".");
	printf("\n");
}

