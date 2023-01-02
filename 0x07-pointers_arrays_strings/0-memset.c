#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void _memset(char *s, char b, unsigned int n);
/**
 * _memset - main entry
 * @s: address
 * @b: char to replace the original with
 * @n: nb replacements
 * Description: fill memory with b, n times
 *
 * Return: void pointer
 */

void _memset(char *s, char b, unsigned int n)
{
	char **s2;
	unsigned int i = 0;
	
	s2 = &s;
	/*printf("s2 %d: %d\n", 0, (*s2)[0]);*/

	/*while (*s2 && i < 100)*/
	/*
	while (i < n)
	{
		(*s2)[i] = b;
		printf("s2 %d: %d\n", i, (*s2)[i]);
		i++;
	}
	*/
	for (i = 0; i < n; i++)
	{
		(*s2)[i] = b;
	}
	/*return (*s);*/
}
