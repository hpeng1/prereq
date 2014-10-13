#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"


bool is_and_expression(char* exp)
{
	//char stack[100];
	int count=0;
	bool flag = false;

	for(int i=0; i<my_strlen(exp);i++)
	{
		if(exp[i] == '(')
			count++;
		if(exp[i] == ')')
			count--;
		if(exp[i] =='a'&& count==1)
			flag= true;
	}
	return flag;
}