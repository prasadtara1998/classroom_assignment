#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *link;
};
void display(struct node *);
struct node* insert(int,struct node *,struct node *);
struct node* insert1(int,struct node *);
struct node* insert2(int,struct node *);
void main()
{
	struct node *first,*second,*last;
	int flag;
	first = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	first->info=1;
	first->link = second;
	second->info=2;
	second->link=first;
	last = second->link;
	display(first);
	first = insert(5,first,last);
	printf("\ninsertion from front\n");
	display(first);
	first=insert1(15,first);
	printf("\ninsertion from end\n");
	display(first);
	first=insert2(10,first);
	printf("\ninsertion in between\n");
	display(first);
}
void display(struct node *first)
{
	struct node *save;
	save = first;
	while(save!=NULL)
	{
		printf("%d,",save->info);
		save = save->link;
	}
}
struct node* insert1(int x,struct node *first)
{
	struct node *new;
	new= (struct node *)malloc(sizeof(struct node));
	new->info = x;
	new->link = NULL;
	if(new==NULL)
	{
		printf("overflow"); 
	}
	else
	{
		if(first==NULL)
		{
			return new;
		}
		else
		{
			struct node *save;
			save = first;
			while(save->link !=NULL)
			{
				save = save->link;
			}
			save->link = new;
			return first;
		}
	}
}
struct node* insert2(int x,struct node *first)
{
	struct node *new;
	new= (struct node *)malloc(sizeof(struct node));
	new->info = x;
	if(new==NULL)
	{
		printf("overflow"); 
	}
	else
	{
		if(first==NULL)
		{
			new->link=NULL; 
			return new;
		}
		else
		{
			if(new->info <= first->info)
			{
				new->link = first;
				return new;
			}
			else
			{
				struct node *save;
				save = first;
				while(save->link !=NULL && (new->info >= (save->link)->info))
				{
					save = save->link;
				}
				new->link = save->link;
				save->link = new;
				return first;
			}
		}
	}
}
struct node* insert(int x,struct node *first)
{
	struct node *new;
	new= (struct node *)malloc(sizeof(struct node));
	new->info = x;
	if(new==NULL)
	{
		printf("overflow"); 
	}
	else
	{
		if(first==NULL)
		{
			new->link=NULL; 
			return new;
		}
		else
		{
			new->link=first;
			return new;
		}
	}
}
