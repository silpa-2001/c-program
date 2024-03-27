#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct books{
	char author_name[100];
	char book_name[100];
};
struct books *book;
int n,i;
int main(){
	printf("Enter the no.of books:");
	scanf("%d",&n);
	book=(struct books *)malloc(sizeof(struct books)*n);
	for(i=0;i<n;i++)
	{
		printf("%d. ",i+1);
		scanf("%s%s",&book[i].book_name,&book[i].author_name);
	}
	printf("Details of the Books\n");
	for(i=0;i<n;i++)
	{
		printf("%d. %s- %s\n",i+1,book[i].book_name,book[i].author_name);
	}
	return 0;
}
