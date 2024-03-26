#include<stdio.h>
#include<malloc.h>
struct d{
	int day, month ,year;
	
};
struct d date1,date2;
void read()
{
	printf("enter your date1:");
	scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
	printf("enter your date2:");
	scanf("%d %d %d",&date2.day,&date2.month,&date2.year);
}
void disp()
{
	printf("\nEntered date1 as DD/MM/YYYY:%d/%d/%d",date1.day,date1.month,date1.year);
	printf("\nEntered date2 as DD/MM/YYYY:%d/%d/%d",date2.day,date2.month,date2.year);
}
void compare()
{
	if(date1.day==date2.day && date1.month==date2.month && date1.year==date2.year)
	{
		printf("\nThe endered Dates are same...");
	}
	else
	{
		printf("\nThe endered Dates are not same...");
	}
}
int main(){
	read();
	disp();
	compare();
	return 0;
	
}
