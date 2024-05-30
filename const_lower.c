#include<stdio.h>
#define MAX 100

char * function(char * str)
{
    
    int i,key='a'-'A';
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
            {
                str[i]=str[i]-key;
            }
        }
    }
    return str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
}

