#include<stdio.h>
#include<malloc.h>
int main(){
	int *a,*b;
    a=(int *)malloc(sizeof(int));	
	printf("Enter the elements:");
	scanf("%d",&a);
	printf("%d\t%d\n",a,*a);
	b=(int *)calloc(3,sizeof(int));
	b=30;
	printf("%d",*b);
	free(b);
	free(a);
	return 0;
}

