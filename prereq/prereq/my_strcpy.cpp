#include "my.h"
#include "node.h"

//pre:  takes two strings 
//post: copy the second string to the first string and returns it


char *my_strcpy(char *s1, char *s2)
{
  int x;
  if(s1 == NULL)
    return NULL;
  if(s2 == NULL)
    return s1;
  for(x=0; s2[x] != '\0'; x++)
    s1[x] = s2[x];
  s1[x++]='\0';
  return s1;

}
