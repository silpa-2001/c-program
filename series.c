#include<stdio.h>
#define MAX 100

int function(int year)
{
   int i,a[100];
   a[1]=0,a[2]=0;
   
   for(i=3;i<=year;i++)
   {
       if((i%2)==1)
       {
           a[i]=a[i-2]+7;
       }
       else if((i%2==0))
       {
           a[i]=a[i-2]+6;
       }
   }
   return a[year];
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}

