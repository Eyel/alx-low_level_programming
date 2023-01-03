#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_strstr(char *haystack, char *needle);
/**
 * _strstr - main entry
 * @haystack: string input
 * @needle: substring to search for
 * Description: search needle in haystack
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
  char *pp = haystack;
  int i = 0;
  int j = 0;
  int stop = 0;

  if (needle == "")
    return (haystack);
  /* check bytes */
  while (haystack[i] != '\0')
  {
    j = 0;
    while (needle[j] != '\0')
    {
      if (pp[i + j] != needle[j])
        break;
      else
        j++;
    }
    if (needle[j] == '\0')
    {
      stop = i;
      break;
    }
    i++;
  }
  /* return */
  if (stop != 0)
    return ( haystack +stop);
  else
    return (NULL);
}
