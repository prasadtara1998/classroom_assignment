#include<stdio.h>
#include<string.h>
#include "stack.h"
void main()
{
	char exp[20];
	int top=0;
	int i,n;
	char s[20];
	printf("Enter a string\n");
	gets(exp);
	n = strlen(exp);
	for(i=0;i<n;i++)
	{
		if(exp[i]== 'a')
		{
			push(s,&top,exp[i],n);
		}
		else
		{
			pop(s,&top);
		}
	}
	if(top==0)
	{
		printf("Valid\n");
	}
	else
	{
		printf("Invalid\n");
	}	
}
