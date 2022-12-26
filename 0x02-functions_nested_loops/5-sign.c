#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_sign(int n);
/**
 * _print_sign - main entry
 * @n: integer
 * Description: tells sign
 *
 * Return: char
 */


void print_sign(int n)
{
	char res = '0';

	if (n > 0)
		res = '+';
	else if (n < 0)
		res = '-';
	_putchar(res);
}
