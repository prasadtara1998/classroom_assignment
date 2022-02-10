#include<stdio.h>
#include<string.h>
#include"stack.h"
int operator(char);
int evaluation(char,int,int);
void main()
{
	int n = 20;
	char exp[n];
	int p,q;
	char s[n];
	char postfix[n];
	int i,top=0,j=0,result;
	printf("Enter a string\n");
	scanf("%s",exp);
	int m = strlen(exp);
	for(i=0;i<m;i++)
	{
		if(operator(exp[i]) == 0)
		{
			push(s,&top,exp[i],n);
			
		}
		else
		{
			p = (int)pop(s,&top);
			p = p-48; // 48 is the asci value of 0
			
			q = (int)pop(s,&top);
			q = q-48; // 48 is the asci value of 0
			
			result = evaluation(exp[i],p,q); 
			push(s,&top,result+48,n); // 48 is the asci value of 0
		}
	}
	printf("Result is: %d\n",result);
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
int evaluation(char x,int y,int z)
{	
	int ans;
	switch(x)
	{
		case '+':
		
		
		ans = z+y;
		return ans;
		
		case '-':
		
		
		ans = z-y;
		return ans;

		case '*':
		
		
		ans = z*y;
		return ans;

		case '/':
		
		
		ans = z/y;
		return ans;
	}
}
