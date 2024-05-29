#include<stdio.h>
#include<math.c>
int checkPrime(int num)
{
    int i,f=0;
    if(num==1)
    {
        return f;
    }
    else
    {
        for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                f=0;
                break;
            }
            else
            {
                f=1;
            }
        }
    }
    return f;
}


void main()
{   
    int num;
    int result;
    scanf("%d",&num);
    result=checkPrime(num);
    printf("%d",result);
}
