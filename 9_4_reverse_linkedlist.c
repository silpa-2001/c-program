#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node node;
node *head=NULL;
node *t;
void insert(int e)
{
	if(head==NULL)
	{
		head=(node *)malloc(sizeof(node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(node *)malloc(sizeof(node));
		t->next->data=e;
		t->next->next=NULL;
	}
}
void disp()
{
	if(head==NULL)
	{
		printf("\nList is Empty\n");
	}
	else
	{
		t=head;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
		printf("\n");
	}
}
void rev(node *r)
{
	if(r!=NULL)
	{
		rev(r->next);
		printf("%d\t",r->data);
	}
	
}
void revwor()
{
	node *curr=head;
	node *prev=NULL;
	node *next=NULL;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
}
int main()
{
	insert(10);
	insert(21);
	insert(18);
	insert(32);
	insert(13);
	insert(49);
	insert(12);
	printf("\nBefore reversing the list\n");
	disp();
	printf("\nReversing without recurssion\n");
	revwor();
	disp();
	printf("\nAfter reversing the list\n");
	rev(head);
	
	return 0;
}
