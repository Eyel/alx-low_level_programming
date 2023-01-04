#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _pow_recursion(int x, int y);
/**
 * _pow_recursion - main entry
 * @x: number to multiply
 * @y: power
 * Description: raise x to power y
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
