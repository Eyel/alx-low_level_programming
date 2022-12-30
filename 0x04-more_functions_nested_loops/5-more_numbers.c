#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * more_numbers- print num from 0 to 14
 * Return: void
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			putchar('0' + j);
		putchar('\n');
	}
	putchar('\n');
}
