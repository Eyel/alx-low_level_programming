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
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int l = sizeof(s) / sizeof(s[0]);
	int i;
	int n;

	for (int i = 0; i < (n < l ? n : l); i++)
	{

		s[i] = b;
	}
	return (s);
}
