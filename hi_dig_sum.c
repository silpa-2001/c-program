#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int i,max=0,temp,e,sum;
   for(i=0;i<lim;i++)
   {
       sum=0;
       temp=arr[i];
       while(temp!=0)
       {
           sum=sum+temp%10;
           temp=temp/10;
       }
       if(sum>max)
       {
           max=sum;
           e=arr[i];
       }
   }
   return e;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}

