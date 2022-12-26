#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_to_98(int n);
/**
 * print_to_98 - main entry
 * @n : int
 *
 * Description: print up to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
