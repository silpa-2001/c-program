#include<stdio.h>
#define MAX 100
#include<math.h>
int function(int num)
{
   int count=0,t,r,sum=0;
   t=num;
   while(t!=0)
   {
      t=t/10;
      count++;
   }
   t=num;
   while(num!=0)
   {
       r=num%10;
       num=num/10;
       sum=sum+pow(r,count);
   }
   if(sum==t)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}


void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}

