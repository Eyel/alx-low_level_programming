#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void);
/**
 * print_alphabet - print alphabet
 *
 * Description: print
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
