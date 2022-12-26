#include <stdio.h>
#include "main.h"

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
	int i = 0;

	for (i = 0; i < 10 ; i++)
	{
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
