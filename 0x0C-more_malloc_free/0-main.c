#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *i;
    float *f;
    double *d;

    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked((unsigned int)INT_MAX);
    printf("%p\n", (void *)d);
    free(i);
    free(f);
    free(d);
    return (0);
}
