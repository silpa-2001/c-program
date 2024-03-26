#include<stdio.h>
int a[10],pos=-1;
void insert()
{
	int e;
	if(pos+1==10)
	{
		printf("Array is Full!!!");
	}
	else
	{
		printf("Insert an element:");
		scanf("%d",&e);
		a[++pos]=e;
	}	
}
void disp()
{
	int i;
	for(i=0;i<pos;i++)
	{
		printf("%d\t",a[i]);
	}
}
void search()
{
	int i,s,count=0;
	printf("Search for element:");
	scanf("%d",&s);
	for(i=0;i<=pos+1;i++)
	{
		if(a[i]==s)
		{
			printf("\nElement FOUND!!!\na[%d]:%d\n",i,a[i]);
			count++;
		}
		if(i==pos+1 && count==0)
		{
			printf("\nElement NOT FOUND...");
			break;
		}
		
	}
}
int menu()
{
	int ch;
	printf("\nInsert-1\nDisplay-2\nSearch-3\nExit-4\nYour Choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
	switch(ch)
		{
		case 1:
			insert();
			break;
		case 2:
			disp();
			break;
		case 3:
			search();
			break;
		default:
			printf("ERROR!!! Invalid Choice...");	
		}
	}
	
}
int main()
{
	process();
	return 0;
}
