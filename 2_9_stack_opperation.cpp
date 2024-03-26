#include<stdio.h>
int push(int stack[],int top, int e)
{
	if(top+1==5)
	{
		printf("Stack overflow");
	}
	else
	{
		stack[++top]=e;
	}
	return top;
}
int pop(int stack[],int top)
{
	if(top==-1)
	{
	printf("stack underflow");
    }
	else
	{
		printf("Deleted element:%d",stack[top--]);		
	}
	return top;	
}
void peek(int stack[],int top)
{
	printf("The top most element:%d\n",stack[top]);
}
int process()
{
	int ch;
	printf("\nPush-1\nPop-2\nPeek-3\nExit-4\nEnter your choice:");
	scanf("%d",&ch);
	return ch;
}
void menu()
{
	int stack[5],top=-1,ch,e;
	for(ch=process();ch!=4;ch=process())
	{
	switch(ch)
	{
		case 1: printf("Enter the element to push:");
		scanf("%d",&e);
		top=push(stack,top,e);
		break;
		case 2:top= pop(stack,top);
		break;
		case 3:peek(stack,top);
		break;
		default:
			printf("Error! The Element is invalid");
	}
}
}
int main()
{
	menu();
	return 0;
}
