#include<stdio.h>

int enqueue(char a[],int *rear,int *front,int in,char p,int num)
{
	switch(in)
	{
		case 1:
		if(*front == 0)
		{
			printf("Empty\n");
			return 0;
		}
		else if(*front == 1)
		{
			printf("Overflow\n");
			return 0;
		}
		else
		{
			*front = *front-1;
			a[*front] = p;
			return 1;
		}
		case 2:
		if(*rear >= num)
		{
			printf("Queue overflow\n");
			return 0;
		}
		else
		{
			*rear = *rear+1;
			a[*rear] = p;
			if(*front == 0)
			{
				*front = 1;
			}
			return 1;
		}
	}
}
char dequeue(char a[],int *rear,int *front)
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
		else
		{
			*front = *front+1;
		}
		return y;
	}
}

void main()
{
	int n = 10,j,insert;
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
			printf("Insertion from: 1.front\t2.rear\n");
			scanf("%d",&insert);
			printf("Enter an element to enqueue\n");
			scanf("\n%c",&x);
			j = enqueue(s,&r,&f,insert,x,n);
			if(j == 1)
			{
				printf("Element is Enqueued successfully\n");
			}
			break;

			case 2:
			i = dequeue(s,&r,&f);
			if(f>=0)
			{
				printf("Element %c is dequeued successfully\n",i);
			}
			break;

		}
	}
}

