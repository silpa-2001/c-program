#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int i,count0=0,count1=0;
   for(i=0;i<lim;i++)
   {
       if(arr[i]==1)
       {
           count1++;
       }
       else
       {
           count0++;
       }
   }
   if(count1==count0)
   {
       return 0;
   }
   else if(count1<count0)
   {
       return -1;
   }
   else
   {
       return 1;
   }
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

