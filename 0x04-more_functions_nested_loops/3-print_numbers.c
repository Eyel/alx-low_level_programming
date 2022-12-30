#include <stdlio.h>
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * print_numbers- print num from 0 to 9
 * Return: void
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
}
