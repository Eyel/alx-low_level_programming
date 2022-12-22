/* betty style doc for function main goes there */
/**
 * swap_int - my function
 * @a: the pointer to be updated
 * @b: the pointer to be updated
 *
 * Description: swap values of the two pointers
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *n;
	*n = *a;
	*a = *b;
	*b = *n;
}
