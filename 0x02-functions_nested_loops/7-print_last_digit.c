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

	ld = abs(n % 10);
	_putchar('0' + ld);
	return (ld);
}
