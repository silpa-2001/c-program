#include<stdio.h>
int q[5],f=-1,r=-1;
void enqueue(int e){
	if(r+1==5)
	{
		printf("\nQueue is full\n");
	}
	else
	{
		if(f==-1)
		{
			f=0;
			q[++r]=e;
		}
		else
		{
			q[++r]=e;
			
		}
	}
}
void dequeue(){
	if(f==-1)
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		printf("\nDequeued Element is:%d",q[f]);
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f++;
		}
	}
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}
