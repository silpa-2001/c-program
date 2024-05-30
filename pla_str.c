#include<stdio.h>
#include<string.h>
#define MAX 100

int function(char * str)
{
    
    char rev[20];
    int j,len= strlen(str);
    
    for(j=0;j<len;j++)
    {
       
        rev[j]=str[len-j-1];
        
    }
    rev[len]='\0';
    if(strcmp(rev,str)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}


