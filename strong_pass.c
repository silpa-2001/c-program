#include<stdio.h>
#define MAX 100
#include<string.h>
int function(char * str)
{
   
    int i,cap=0,small=0,dig=0,nalf=0,sp=1;
    
    if(strlen(str)<8)
    {
        return 0;
    }
    for(i=0;str[i]!='\0';i++)
    {
            
        if(str[i]>='A'&&str[i]<='Z')
        {
            cap=1;
            
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            small=1;
            
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            dig=1;
            
        }
        else if(str[i]==' ')
        {
            sp=0;
            
        }
        else
        {
            nalf=1;
           
        }
    }
    return(cap&&small&&dig&&sp&&nalf);
    
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}

