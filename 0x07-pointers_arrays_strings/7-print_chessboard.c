#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_chessboard(char (*a)[8]);
/**
 * print_chessboard - main entry
 * @a: board
 * Description: print chessboard
 *
 * Return: void pointer
 */

void print_chessboard(char (*a)[8])
{
  for (int i = 0; i < 8 ; i++)
  {
    for (int j = 0; j < 8 ; j++)
    {
      printf("%c", a[i][j]);
    }
    printf("\n");
  }
}
