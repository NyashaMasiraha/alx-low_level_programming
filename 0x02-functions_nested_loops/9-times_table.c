#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, k, space;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			(k < 10) ? (space = 2) : (space = 1);

				if (j == 0)
				{
				_putchar('0');
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				if (space == 2)
				{
					_putchar(' ');
				}
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
