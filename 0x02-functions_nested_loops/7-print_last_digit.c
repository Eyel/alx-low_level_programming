#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_last_digit(int n);
/**
 * print_last_digit - main entry
 * @n: int to test
 *
 * Description: return last digit
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int ld;

	if (n != 0)
	{
		ld = abs(n) % 10;
		_putchar('0' + ld);
	}
	else
	{
		ld = 0;
		_putchar('0');
	}
	return (ld);
}
