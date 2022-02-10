#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
void main()
{
	struct node *head,*newnode,*temp;
	head = 0;
	int choice=1;
	while(choice)
	{	
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("Enter Data\n");
		scanf("%d",&newnode->info);
		newnode -> link = 0;
		if(head == 0)
		{
			head = temp = newnode;
		}
		else
		{
			temp -> link = newnode;
			temp = newnode;
		}
		printf("Do you want to continue 1 or 0\n");
		scanf("%d",&choice);
	}
	temp = head;
	while(temp !=0)
	{
		printf("Info stored are: %d\t",temp->info);
		temp = temp->link;
	}
	
}


