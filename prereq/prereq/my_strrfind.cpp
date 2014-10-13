#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

int my_strrfind(char* str, char c)
{
  int ret = -1;
  int hold;
  if(str != NULL)
    for(hold=0; str[hold] != '\0'; hold++)
      if(str[hold] == c)
	ret = hold;
  return ret;
}