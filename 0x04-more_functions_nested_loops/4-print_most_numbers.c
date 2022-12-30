#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_most_numbers- print num from 0 to 9
 * Return: void
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
			putchar('0' + i);
	}
	putchar('\n');
}
