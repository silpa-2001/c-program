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
void beginInsert(int e)
{
	if(head==NULL)
	{
		head=(node *)malloc(sizeof(node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		t=(node *)malloc(sizeof(node));
		t->data=e;
		t->next=head;
		head=t;
	}
}
void specificInsert(int n,int e)
{
	node *t1;
	if(head==NULL)
	{
		head=(node *)malloc(sizeof(node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		t=head;
		while(t->data!=n)
		{
			t=t->next;
		}
		t1=(node *)malloc(sizeof(node));
		t1->data=e;
		t1->next=t->next;
		t->next=t1;
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
		
	}
}
int main()
{
	printf("\nInserting at the End\n");
	insert(10);
	insert(34);
	insert(67);
	insert(54);
	insert(21);
	disp();
	printf("\nInserting at the Beginning\n");
	beginInsert(16);
	beginInsert(24);
	beginInsert(49);
	beginInsert(90);
	disp();
	printf("\nInserting Elements at Specific Location\n");
	specificInsert(24,34);
	specificInsert(67,89);
	disp();
	return 0;
}
