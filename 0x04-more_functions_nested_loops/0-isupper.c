#include <stdlib.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * _isupper - upper char
 *@c: char
 * Return: int
 *
 */

int _isupper(char c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
