#include<stdio.h>
int a[10],pos=-1;
void insert(int e)
{
	if(pos+1==9)
	{
		printf("Array is full\n");
	}
	else
	{
		pos++;
		a[pos]=e;
	}
}
void delet()
{
	if(pos==-1)
	{
		printf("Array is Empty\n");
	}
	else
	{
		printf("Deleted element:%d",a[pos--]);
		pos--;
	}
}
void disp()
{
	int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
}
void sort()
{
	int t=0,i,j;
	for(i=0;i<pos;i++)
	{
		for(j=i+1;j<pos;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	
	}
	
}
void search()
{
	int s,i;
	printf("Search for the element:");
	scanf("%d",&s);
	for(i=0;i<=pos+1;i++)
	{
		if(a[i]==s)
		{
			printf("Element Found!!!\nElement present at %d:%d",i,a[i]);
			break;
		}
		if(i==pos+1)
		{
			printf("\nElement not Found...");
			break;
		}
	}
	
}
int menu()
{
	int ch;
	printf("\nInsert-1\nDelete-2\nDisplay-3\nSort-4\nSeach=5\nExit-6\nYour Choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch,e;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1: 
				printf("Insert a value:");
				scanf("%d",&e);
				insert(e);
				break;
			case 2:
				delet();
				break;
			case 3:
				disp();
				break;
			case 4:
				sort();
				break;
			case 5:
				search();
				break;	
			default:
				printf("ERROR! Invalid Choice\n");
		}
	}
}
int main()
{
	process();
	return 0;
}
