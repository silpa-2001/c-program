#include<stdio.h>
int a[10];
int n,i,sum=0;
void add(){
	printf("\n");
	i=0;
	while(i<n-1)
	{
		sum=a[i]+a[i+1];
		printf("%d\t",sum);
		a[i]=sum;
		i++;
	}
	n--;
}
int main(){
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	printf("The elements of an array are:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	add();
	add();
	add();
	add();
	add();
	add();
	add();
	return 0;
}

