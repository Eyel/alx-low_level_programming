#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_sign(int n);
/**
 * print_sign - main entry
 * @n: integer
 * Description: tells sign
 *
 * Return: integer
 */


int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		res = -1;
	}
	else
	{
		_putchar('0');
		res = 0;
	}
	return (res);
}
