#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void _print_rev_recursion(char *s);
/**
 * _print_rev_recursion - main entry
 * @s: str
 * Description: print string in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
