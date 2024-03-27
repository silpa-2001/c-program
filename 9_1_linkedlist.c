#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node list;
list *head=NULL;
list *t;
void insert(int e)
{
	if(head==NULL)
	{
		head=(list *)malloc(sizeof(list));
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
		t->next=(list *)malloc(sizeof(list));
		t->next->data=e;
		t->next->next=NULL;
	}
}
void disp()
{
	if(head==NULL)
	{
		printf("\nList is Empty!!!\n");
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
	insert(10);
	insert(34);
	insert(67);
	insert(54);
	insert(21);
	insert(16);
	disp();
	return 0;
}
