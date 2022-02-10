#include<stdio.h>
#include<string.h>
#include "stack.h"
int operator(char);
int priority(char);
void main()
{
	char exp[20];
	int n=20;
	char s[n];
	char postfix[20];
	int top =0,i=0,j=0;
	printf("Enter a string\n");
	scanf("%s",exp);
	int m = strlen(exp);
	s[1] = 1;
	for(i=0;i<m;i++)
	{
		if(operator(exp[i]) == 1)
		{
			if((s[1])!= 1)
			{
			
				if(priority(exp[i]) >= priority(s[top-1]))
				{
					postfix[j] = pop(s,&top);
					push(s,&top,exp[i],n);
					j++;
				}
				else
				{
					push(s,&top,exp[i],n);
				}
			}
			else
			{
				push(s,&top,exp[i],n);
			}
		}
		else
		{
			postfix[j] = exp[i];
			j++;
		}
	}
	postfix[j] = s[1];
	for(i=0;i<m;i++)
	{
		printf("%c",postfix[i]);
	}
	
}
int operator(char a)
{
	if(a == '+' || a == '-' || a == '*' || a == '/')
	{		
		return 1;
	}
	else
	{
		return 0;
	}
}
int priority(char symbol)
{
	if (symbol == '^')
	{
		return 3;
	}
	else if (symbol == '/')
	{
		return 2;
	}
	else if (symbol == '*')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

