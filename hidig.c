#include<stdio.h>

int fun(int num)
{
    int lar,s;
    lar=num%10;
    while(num!=0)
    {
        num=num/10;
        s=num%10;
        if(s>lar)
        {
            lar=s;
        }
    }
    return lar;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}
