#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_strpbrk(char *s, char *accept);
/**
 * _strpbrk - main entry
 * @s: string input
 * @accept: char to search for
 * Description: search accept in s
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
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
