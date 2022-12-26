#include <stdio.h>

void print_alphabet(void);
/**
 * print_alphabet - print alphabet
 *
 * Description: print
 *
 * Return: void
 */


void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		/* printf(n); */
		_putchar(n);
	}
	/* printf("\n"); */
	_putchar('\n');

}
