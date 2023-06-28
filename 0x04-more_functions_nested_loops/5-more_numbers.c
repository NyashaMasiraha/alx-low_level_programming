#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times, followed by a new line.
 * return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			if (j >= 9)
			{
				_putchar('1');
			_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

