#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_diagsums(int *a, int size);
/**
 * print_diagsums - main entry
 * @a: array
 * @size: square size
 * Description: sum two diags
 *
 * Return: void pointer
 */

void print_diagsums(int *a, int size)
{
    int sum1 = 0;
    int sum2 = 0;
    int *p;

    for (int i = 0; i < size ; i++)
    {
        p = &a[i*size];
        sum1 += p[i];        
        sum2 += p[size -i -1];
    }
    printf("%d %d\n", sum1, sum2);
}
