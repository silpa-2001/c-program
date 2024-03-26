#include<stdio.h>
int a[10],pos=-1,i;
void read(int n)
{
	int e;
	printf("Insert the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
}
void disp(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
}
void sort(int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}
	}
}
	
int main()
{
	int n;
	printf("Enter a limit:");
	scanf("%d",&n);
	read(n);
	printf("Before sorting\n Array is:\n");
	disp(n);
	sort(n);
	printf("After sorting\n Array is:\n");
	disp(n);
	return 0;
}
