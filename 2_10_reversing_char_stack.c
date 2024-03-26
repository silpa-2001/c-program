#include<stdio.h>
#include<string.h>
int i,l,top=-1;
char stack[50];
char push(char a){
	if(top+1==50)
	{
		printf("stack overflow....\n");
	}
	else
	{
		stack[++top]=a;
	}
}
char pop(){
	if(top==-1)
	{
		printf("stack underflow....\n");
	}
	else
	{
		return stack[top--];
	}
}
int main()
{
	char a[50];
	printf("Enter the word:");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		push(a[i]);
	}
	for(i=0;i<l;i++)
	{
		a[i]=pop();
	}
	printf("\n After reversing the string:%s",a);
	return 0;
}
