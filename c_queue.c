#include<stdio.h>

int enqueue(char a[],int *rear,int *front,char p,int num)
{
	if(*rear == num)
	{
		*rear = 1;
	}
	else
	{
		*rear = *rear+1;
	}

	if(*front == *rear)
	{
		printf("Overflow\n");
		return 0;
	}
	else
	{
		a[*rear] = p;
		if(*front == 0)
		{
			*front = 1;
		}
		return 1; 
	}
	
}
char dequeue(char a[],int *rear,int *front,int num)
{
	if(*front == 0)
	{
		printf("Queue overflow\n");
	}
	else
	{
		int y = a[*front];
		if(*front == *rear)
		{
			*front = *rear = 0;
		}
		else if(*front = num)
		{
			*front = 1;
		}
		else
		{
			*front = *front+1;
		}
		return y;
	}
}

void main()
{
	int n = 4,j;
	char s[n+1];
	int r = 0,f=0;
	char x;
	char i;
	int op = 0;
	while(op<3)
	{
		printf("Enter operation you want to perform\n");
		printf("1.enqueue\t2.Dequeue\t3.quit");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter an element to enqueue\n");
			scanf("\n%c",&x);
			j = enqueue(s,&r,&f,x,n);
			if(j == 1)
			{
				printf("Element is Enqueued successfully\n");
			}
			break;

			case 2:
			i = dequeue(s,&r,&f,n);
			if(f>=0)
			{
				printf("Element %c is dequeued successfully\n",i);
			}
			break;

		}
	}
}

