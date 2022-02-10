#include<stdio.h>
#include "stack.h"
#include<string.h>

void main()
{
	char a[10];
	int i=0,top=0,j,n;
	char s[10];
	printf("Enter the string\n");
	gets(a);
	n = strlen(a);
	while(i<n/2)
	{
		push(s,&top,a[i],n);
		i++;
	}
	j = (n/2)+1;
	while(j<n)
	{
		if(a[j]==s[top])
		{
			pop(s,&top);
			j++;
		}
		else
		{
			break;
		}
	}
	if(j==n && top ==0)
	{
		printf("\nentered string is palindrome\n");
	}
	else
	{
		printf("\nNot palindrome\n");
	}
}
