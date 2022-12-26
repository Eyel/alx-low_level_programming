#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void times_tables(void);
/**
 * times_tables- main entry
 *
 * Description: print nine tables
 *
 * Return: void
 */

void times_tables(void);
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
