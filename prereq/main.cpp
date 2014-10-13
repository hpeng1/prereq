#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

int main()
{
	int pointer=0;
	my_str("Please input the prerequisite expression(no space):");
	my_str("\n");
	char exp[1000];
	scanf("%s",&exp);
	/*
	my_str("How many courses are there on your list?");
	my_str("\n");
	int n;
	scanf("%d",&n);
	my_str("Ok, what are they?");
	my_str("\n");
	char*list[10];
	for(int i=0; i<n; i++)
	{
		my_str("Type in course name, please:");
		scanf("%s",&list[i]);
	}*/
	char* list[10]= {"cs105","cs383","cs347"};
	t_node* root = parse(exp);
	bool result = false;
	result = check(root,list);
	printf("%s",result==false?"FALSE\n":"TRUE\n");
	
	return 1;
}