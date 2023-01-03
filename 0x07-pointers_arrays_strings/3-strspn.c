#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept);

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
	int res = 0;
	int i = 0;
	unsigned int j = 0;
	int trouve = 0;
	unsigned int stop = 0;

	/* first bytes */
	while (s[i] != '\0')
	{
		j = 0;
		trouve = 0;
		while (accept[j] != '\0' && trouve == 0)
		{
			if (s[i] == accept[j])
			{
				trouve = 1;
				break;
			}
			j++;
		}
	if (trouve == 0)
	{
		/*printf("break at %d", i);*/
		stop = i;
		break;
	}
	else
		i++;
	}
	/* reverse check*/
	i = 0;
	trouve = 0;
	while (accept[i] != '\0')
	{
		trouve = 0;
		for (j = 0; j < stop; j++)
		{
			if (accept[i] == s[j])
			{
				trouve = 1;
				break;
			}
		}
		if (trouve == 0)
		{
			/*printf("break at %d, %c non trouve", i, accept[i]);*/
			/*printf("\nres _strspn 0");*/
			break;
		}
		else
			i++;
	}
	if (accept[i] == '\0')
	{
		/*printf("\nres _strspn %d", stop);*/
		res = stop;
	}
	return (res);
}
