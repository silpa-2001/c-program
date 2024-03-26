#include<stdio.h>
static int c;//static variable
int b=6;//Global variable
int main()
{
	register int e;//Register variable
	int a=4;//Local variable
	printf("%d\t%d\n%d\n",a,b,c);
	e=a+b+c;
	printf("result:%d",e);
	return 0;
}




