#include<stdio.h>
#include<malloc.h>
int main(){
	int sum=0,n,i,*p;
	printf("Enter the no.of integers:");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&p[i]);
		sum=sum+p[i];
	}
	sum/=n;
	printf("The mean is:%d",sum);
	return 0;
}
