#include "holberton.h"
char *_strcpy(char *dest, char *src)
{
  int i = 0;
  int u;
  while (src[i] != '\0')
    {
    i++;
    }
  for (u = 0; u <= i; u++)
    {    
dest[u] = src[u];
    } 
 return (dest);
}
