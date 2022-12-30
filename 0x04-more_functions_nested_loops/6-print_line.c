#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_line- draw line
 * Return: void
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
