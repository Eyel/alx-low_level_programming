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
		for (i = 0; i < 9 ;i++)
		{
			n = table * i;
			if (n > 10)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else
				_putchar('0' + n);
			_putchar(' ');
			_putchar(' ');
			_putchar(',');
		}
		if (n > 10)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else
			_putchar('0' + n);
		_putchar('\n');
	}
}
