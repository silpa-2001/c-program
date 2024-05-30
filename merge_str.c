#include <stdio.h>

int main()
{
    char word1[]="abc",word2[]="pqr";
    int i=0,j=0,k;
    int len1=strlen(word1),len2=strlen(word2);
    char merged[100];
    for(k=0;k<len1+len2; )
    {
        if(i<len1)
        {
            merged[k++]=word1[i++];
        }
        if(j<len2)
        {
            merged[k++]=word2[j++];
        }
        
    }
    merged[k]='\0';
    printf("%s",merged);
    return 0;
}