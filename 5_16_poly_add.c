#include<stdio.h>
int n,a1[10],a2[10],i;
void read(){
	printf("\nEnter the elements of the first polynomial for:");
	for(i=n-1;i>=0;i--)
	{
		printf("x^%d:",i);
		scanf("%d",&a1[i]);	
	}
	printf("\nEnter the element of the second polynomial for:");
	for(i=n-1;i>=0;i--)
	{
		printf("x^%d:",i);
		scanf("%d",&a2[i]);	
	}
}
void add(){
	printf("\nSum of two polynomials:\n");
	for(i=n-1;i>=0;i--)
	{
		int sum=0;
		sum=a1[i]+a2[i];
		if(i!=0)
		{
			printf("%dx^%d+",sum,i);
		}
		if(i==0)
		{
			printf("%dx^%d",sum,i);
		}
	}	
}

void disp(){
	printf("\nThe first polynomial is:\n");
	for(i=n-1;i>=0;i--)
	{
		if(i!=0)
		{
			printf("%dx^%d+",a1[i],i);
		}
		if(i==0)
		{
			printf("%dx^%d",a1[0],i);
		}
	}
	printf("\nThe second polynomial is:\n");
	for(i=n-1;i>=0;i--)
	{
		if(i!=0)
		{
			printf("%dx^%d+",a2[i],i);
		}
		if(i==0)
		{
			printf("%dx^%d",a2[0],i);
		}
	}		
}
int main(){
	printf("Enter the no.of degree for both the polynomials:\n");
	scanf("%d",&n);
	read();
	disp();
	add();
	return 0;
}
