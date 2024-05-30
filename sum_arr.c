#include <stdio.h>
#define MAX 100

int function(int N, int S,int * A)
{
    int i,j,sum=0;
    for(i=0;i<N;i++)
    {
        sum=A[i];
        if(sum==S)
        {
            printf("%d %d",i+1,i+1);
            return 0;
        }
        for(j=i+1;j<N;j++)
        {
            if(sum<S)
            {
                sum=sum+A[j];
                if(sum==S)
                {
                     printf("%d %d",i+1,j+1);
                     return 0;
                }
            }
        }
    }
    return -1;
    
}

int main() {
    int i,N,S,A[MAX];
    
    scanf("%d",&N);
    scanf("%d",&S);
    for(i=0; i<N; i++)
        scanf("%d",&A[i]);
        
    function(N,S,A);
    return 0;
}

