#include<stdio.h>

int sumofdig(int num)
{
    int i,sum=0,last;
    while(num!=0){
    last=num%10;
    num=num/10;
    sum=sum+last;
    }
    return sum;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}
