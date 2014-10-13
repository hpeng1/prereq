#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

bool is_unit_expression(char* exp)
{
	
	int pos = my_strfind(exp,'(');
	int rpos= my_strrfind(exp,')');
	if((pos==-1) && (rpos==-1))
		return true;
	else
		return false;
}