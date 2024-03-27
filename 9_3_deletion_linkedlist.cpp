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
	printf("\n");
}
void begindelete()
{
	if(head==NULL)
	{
		printf("List is Empty\n");
	}
	else
	head=head->next;
}
void lastdelete()
{
	if(head==NULL)
	{
		printf("List is Empty\n");
	}
	else
	{	
		t=head;
		while(t->next->next!=NULL)
		{
			t=t->next;
		}
	 t->next=t->next->next;
	}
}
void specificdelete(int e)
{
	if(head==NULL)
	{
		printf("\nList is Empty\n");
	}
	else
	{
		
		if(head->data==e&&head->next==NULL)
		{
			head=NULL;
		}
		else if(head->data==e)
		{
			head=head->next;
		}
		else 
		{
			t=head;
			while(t->next!=NULL&&t->next->data!=e)
			{
				t=t->next;
			}
			if(t->next==NULL)
			{
				printf("\nElement not Found...\n");
			}
			else
			{
				t->next=t->next->next;
			}
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
	insert(24);
	insert(49);
	insert(90);
	disp();
	printf("Deleting Elements at the Beginning\n");
	begindelete();
	disp();
	begindelete();
	disp();
	begindelete();
	disp();
	printf("Deleting Specific Elements\n");
	specificdelete(90);
	disp();
	specificdelete(54);
	disp();
	specificdelete(33);
	specificdelete(16);
	disp();
	printf("Deleting Elements at Last\n");
	lastdelete();
	disp();
	lastdelete();
	disp();
	lastdelete();
	disp();
	return 0;
}
