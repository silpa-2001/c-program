/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=5,sl,l;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
        l=a[0];sl=a[1];
    }
    else
    {
        sl=a[0];l=a[1];
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
        {
            sl=a[i];
        }
    }
    printf("%d",sl);
   
    return 0;
}
