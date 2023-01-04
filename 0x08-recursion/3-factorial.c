#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int factorial(int n);
/**
 * factorial - main entry
 * @n: number
 * Description: return factorial of n
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
