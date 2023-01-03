#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _memcpy - main entry
 * @dest: destination
 * @src: source
 * @n: nb replacements
 * Description: copy memory from source to destination
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **s2;
	unsigned int i = 0;
	
	s2 = &dest;
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
		(*s2)[i] = src[i];
	}
	return (*s2);
}
