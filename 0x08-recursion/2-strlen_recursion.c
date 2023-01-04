#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen_recursion(char *s);
/**
 * __strlen_recursion - main entry
 * @s: str
 * Description: return str length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
