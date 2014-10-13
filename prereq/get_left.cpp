#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

char* get_left(char* exp)
{
	int count=0;
	bool flag = false;
	int pivot = 0;
	char *result = my_strdup("#######################################################################") ;
	

	// find the first 'a' or 'o'
	for(int i=0; i<my_strlen(exp);i++)
	{
		if(exp[i] == '(')
			count++;
		if(exp[i] == ')')
			count--;
		if(((exp[i] =='a')||(exp[i] =='o'))&& count==1)
		{
			pivot=i;
			break;
		}
	}

	//copy the first n charactors of exp, stop at pivot
	for(int i=0;i<pivot-1;i++)
		result[i]= exp[i+1];
	result[pivot-1]='\0';
	return result;
}