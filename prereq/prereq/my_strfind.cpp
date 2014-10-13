#include "my.h"
#include "node.h"

//pre: takes a string and a char
//post: find the position of that char and return that position

int my_strfind(char* str, char c)
{
  int ret;
  if(str != NULL)
    for(ret=0; str[ret] != '\0'; ret++)
      if(str[ret] == c)
	return ret;
  return -1;
}
