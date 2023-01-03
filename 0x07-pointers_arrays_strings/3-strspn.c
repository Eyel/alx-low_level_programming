#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept);
char *uniqueChars(char *s);

/**
 * _strspn - main entry
 * @s: string input
 * @accept: char to search for
 * Description: search c in s
 *
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	char **s2;
	int i = 0;

	s2 = &s;	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*s2 = &s[i];
			break;
		}
		else
			i++;
	}
	if (s[i] == '\0')
		*s2 = NULL;
	return (*s2);
}

char *uniqueChars(char *s)
{
	char *res;
}



