#include <stdio.h>
#include <string.h>
#include "my.h"
#include "node.h"

int main()
{
	int pointer=0;
	/*char * str = "and";
	t_node* node = new_node(str,NULL,NULL,NULL);
	printf("%s", node->type);
	my_str("\n");*/
	/*char * course = "mike";
	char** list[10][10];
	(*list) = "ha";
	*/
	
	char* list[10]= {"cs105","cs383","cs347"};
	/*t_node * root = new_node("or",NULL,NULL,NULL);
	root->left = new_node("and",NULL,NULL,NULL);
	root->right= new_node("unit","cs383",NULL,NULL);
	root->left->left= new_node("unit","cs105",NULL,NULL);
	root->left->right=new_node("unit","cs115",NULL,NULL);
	*/
	//bool result= is_and_expression("((cs551 or cs185)and cs119)");
	//printf("%s",result==false?"FALSE\n":"TRUE\n");
	/*
	char stack[100];
	push('c',stack,0);
	push('s',stack,1);
	push('1',stack,2);
	//stack[3] ='\0';
	my_str(stack);
	my_str("\n");
	//printf("%s",result==false?"FALSE\n":"TRUE\n");
	*/
	//char* left= get_right("((cs551orcs185)or(cs115orcs506))");
	//my_str(left);
	//my_str("\n");
	t_node* root = parse("(cs496and(cs383orcs347))");
	bool result = false;
	result = check(root,list);
	printf("%s",result==false?"FALSE\n":"TRUE\n");
	
	return 1;
}