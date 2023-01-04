#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int is_palindrome(char *s);
/**
 * is_palindrome - main entry
 * @s: str
 * Description: palindrome
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	char *p = s;
	int i = 0;
	int res = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i > 1)
	{
		if (s[0] == s[i - 1])
		{
			s[i - 1] = '\0';
			p = &s[1];
			res = is_palindrome(p);
		}
		else
			res = 0;
	}
	else
		res = 1;
	return (res);
}
