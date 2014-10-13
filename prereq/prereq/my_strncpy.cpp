#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"


char *my_strncpy(char *s1, char *s2, unsigned int n)
{
  int x;
  if(s1 == NULL)
    return s1;
  if(s2 == NULL)
    return s1;
  for(x=0; x<=0 && s2[x]!='\0'; x++)
    s1[x]=s2[x];
  return s1;
}