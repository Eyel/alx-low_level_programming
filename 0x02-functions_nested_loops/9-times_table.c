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

	for (table = 0; table < 10; table++)
	{
		for (i = 0; i < 9 ;i++)
		{
			_putchar('0' + table * i);
			_putchar(' ');
			_putchar(',');
		}

		_putchar('0' + table * i);
		_putchar('\n');
	}
}
