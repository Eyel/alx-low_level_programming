#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void _puts_recursion(char *s);
/**
 * _puts_recursion - main entry
 * @s: str
 * Description: fill memory with b, n times
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
