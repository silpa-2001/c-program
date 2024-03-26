#include<stdio.h>
int n,a[10],i;
void read()
{
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void disp()
{
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main(){
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	read();
	disp();
	return 0;
}
