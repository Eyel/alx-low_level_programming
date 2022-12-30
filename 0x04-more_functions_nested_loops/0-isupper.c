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
	int res = 1;

	if (isupper(c) == 0)
		res = 0;
	return (res);
}
