#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void jack_bauer(void);
/**
 * jack_bauer - main entry
 *
 * Description: print hours 24
 *
 * Return: void
 */

void jack_bauer(void);
{
	int hour;
	int mn;

	for (hour = 0; hour <24; hour ++)
	{
		for (mn = 0; mn <60; mn ++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + mn / 10);
			_putchar('0' + mn % 10);
		}
	}
}
