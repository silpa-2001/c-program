#include<stdio.h>
int n,a[10],i;
void read(){
	for(i=n-1;i>=0;i--)
	{
		printf("Enter the polynomial for x^%d:",i);
		scanf("%d",&a[i]);
		
	}
}

void disp(){
	printf("The polynomial is:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%dx^%d+",a[i],i);
		if(i==0)
		{
			printf("%dx^%d",a[0],i);
		}
	}	
}
int main(){
	printf("Enter the no.of degree:");
	scanf("%d",&n);
	read();
	disp();
	return 0;
}
