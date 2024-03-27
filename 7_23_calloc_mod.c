#include<stdio.h>
#include<malloc.h>
int main(){
	int i,n,*a,mode=0,max=0,*count;
	printf("Enter the no.of Elements:");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	printf("Enter the Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	count=(int *)calloc(101,sizeof(int));
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=0;i<=100;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			mode=i;
		}
	}
	printf("Mode=%d",mode);
	return 0;
}
