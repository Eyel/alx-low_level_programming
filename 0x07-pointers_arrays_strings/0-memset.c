#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
 * _memset - main entry
 * @s: address
 * @b: char to replace the original with
 * @n: nb replacements
 * Description: fill memory with b, n times
 *
 * Return: void pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **s2;
	unsigned int i = 0;

	s2 = &s;
	for (i = 0; i < n; i++)
	{
		(*s2)[i] = b;
	}
	return (s);
}
