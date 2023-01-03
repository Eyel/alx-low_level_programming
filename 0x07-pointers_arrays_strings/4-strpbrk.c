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
	char *res = "";
	int i = 0;
	int j = 0;
	int trouve = 0;
	int stop = 0;
	int n;
	
	/* check bytes */
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && trouve == 0)
		{
			if (s[i] == accept[j])
			{
				trouve = 1;
				stop = i;
				break;
			}
			j++;
		}
		i++;
	}
	/* return */
	if (stop != 0)
		return (s + stop);
	else
		return (NULL);
}
