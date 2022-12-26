#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void times_table(void);
/**
 * times_table- main entry
 *
 * Description: print nine tables
 *
 * Return: void
 */

void times_table(void)
{
	int table;
	int i;
	int n;

	for (table = 0; table < 10; table++)
	{

		_putchar('0');
		for (i = 1; i < 10; i++)
		{
			n = table * i;
			_putchar(',');
			_putchar(' ');
			if (n > 9)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + n);
			}
		}
		_putchar('\n');
	}
}
