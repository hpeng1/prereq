#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

char* get_right(char* exp)
{
	int count=0;
	int flag =-1;
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
			if( exp[i] =='a')
				flag=3;
			if( exp[i] =='o')
				flag=2;
			pivot=i+flag;
			break;
		}
	}


	//copy the last n charactors of exp, from pivot to exp's end
	// flag==1: and
	// flag==2: or
	int j=0;
	for(j=0;exp[j+pivot]!='\0';j++)
		result[j] = exp[j+pivot];
	result[j-1]='\0';
	return result;
}