#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_strchr(char *s, char c);
/**
 * _strchr - main entry
 * @s: string input
 * @c: char to search for
 * Description: search c in s
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
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
