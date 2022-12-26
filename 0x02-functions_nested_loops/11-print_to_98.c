#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_to_98(int n);
/**
 * print_to_98 - main entry
 *
 * Description: print up to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if ( n < 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}
	/*_putchar('0' + 98);*/
	_putchar('\n');
}
