#include<stdio.h>
#define MAX 30

float function(int arr[],int lim)
{
   float sum=0;
   int i;
   for(i=0;i<lim;i++)
   {
       sum=sum+arr[i];
   }
   return sum/lim;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    float out=function(A,n);    
    
    printf("%f",out);
    return 0;
}

