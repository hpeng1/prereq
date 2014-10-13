#include "my.h"
#include "node.h"
/*
pre: takes an string 
post: returns the length of that string
*/
int my_strlen(char* str)
{
  int size = 0;
  if(str == NULL)
    return -1;
  while(str[size] != '\0')
    size++;
  return size;
}