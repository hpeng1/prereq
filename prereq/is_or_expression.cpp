#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

bool is_or_expression(char* exp)
{
	//char stack[100];
	int count=0;
	bool flag = false;

	for(int i=0; i<my_strlen(exp);i++)
	{
		if(exp[i] == '(')
		{
			//push(exp[i],stack,count);
			count++;
		}
		if(exp[i] == ')')
		{
			//pop(stack);
			count--;
		}
		if(exp[i] =='o'&& count==1)
			flag= true;
	}
	return flag;
}
/*
void push(char c,char*stack,int n)
{
	int pointer=0;
	//int length = my_strlen(stack);
	int length=n;

	int i=0;
	for(i=length; i>0; i--)
		stack[i]= stack[i-1];
	stack[0]= c;
	stack[length+1]= '\0';

}
/*
char pop(char*stack)
{
	int pointer =0;
	int length;
	length = my_strlen(stack);
	char result = stack[0];
	for(int i=0; i<length-1; i++)
		stack[i] = stack[i+1];
	stack[length]='\0';
	return result;
}

char top(char*stack)
{
	return stack[0];
}

bool is_empty(char* stack,int n)
{
	if(n==0)
		return true;
	else
		return false;
}

*/