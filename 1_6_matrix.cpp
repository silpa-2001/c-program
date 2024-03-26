#include<stdio.h>
#define row 2
#define col 2
int a1[row][col],a2[row][col],i,j,sum[row][col],sub[row][col],multi[row][col];
void read(int a[][col]){
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void disp(int a[][col]){
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void add(){
	printf("The sum of matrix1 and matrix2 is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=a1[i][j]+a2[i][j]; 		

		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	 		printf("%d\t",sum[i][j]);

		}
		printf("\n");
	}
}
void diff(){
	printf("The difference of matrix1 and matrix2 is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=a1[i][j]-a2[i][j]; 		

		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	 		printf("%d\t",sub[i][j]);

		}
		printf("\n");
	}
}
void multiple(){
	int k;
	printf("The product of matrix1 and matrix2 is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			multi[i][j]=0;
			for(k=0;k<col;k++)
			{
				multi[i][j]=multi[i][j]+(a1[i][k]*a2[k][j]);
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
}
int main(){
	printf("\nElements of 1st matrix:\n");
	read(a1);
	printf("\nElements of 2st matrix:\n");
	read(a2);
	printf("\ndisplaying 1st matrix:\n");
	disp(a1);
	printf("\ndisplaying 1st matrix:\n");
	disp(a2);
	add();
	diff();
	multiple();
	return 0;
}
