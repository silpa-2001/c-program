#include<stdio.h>
#include<string.h>
struct emp{
	int eno,deptno,esal;
	char ename[20];
};
struct emp a[20];
void read(int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter the Employee no.:");
		scanf("%d",&a[i].eno);
		printf("Enter the Employee's Name:");
		scanf(" %s",&a[i].ename);
		printf("Enter the salary:");
		scanf("%d",&a[i].esal);
		printf("Enter the department no.:");
		scanf("%d",&a[i].deptno);
	}
}
void search(int n)
{
	int i;
	printf("\nSearching for the employee with Employee no.:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n==a[i].eno)
		{
			printf("\nEmployee no. exists...\nEmployee no:%d\nEmployee Name:%s\n",a[i].eno,a[i].ename);
			break;
		}
		if(i+1==20)
		{
			printf("\n Empolyee no. doesn't exists...\n");
			break;
		}
	}
}
void sortByName(int n)
{
	int i, j;
	struct emp temp;
	for(i = 0; i < n - 1; i++) 
	{
		for(j = i + 1; j < n; j++) 
		{
			if(strcmp(a[i].ename, a[j].ename) > 0) 
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nEmployees sorted by employee name:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Employee No: %d, Name: %s, Salary: %d, Dept No: %d\n", a[i].eno, a[i].ename, a[i].esal, a[i].deptno);
    }
}
void sortBySalary(int n)
{
	int i,j;
	struct emp temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].esal>a[j].esal)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nEmployees sorted by salary:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Employee No: %d, Name: %s, Salary: %d, Dept No: %d\n", a[i].eno, a[i].ename, a[i].esal, a[i].deptno);
    }
}
void deleteEmployee(int n, int empNo) 
{
    int i,j, found = 0;
    for (i = 0; i < n; i++) 
	{
        if (a[i].eno == empNo) 
		{
            found = 1;
            for (j = i; j < n - 1; j++) 
			{
                a[j] = a[j + 1];
            }
            printf("Employee with Employee No: %d has been deleted successfully.\n", empNo);
            break;
        }
    }
    if (!found) 
	{
        printf("Employee with Employee No: %d not found.\n", empNo);
    }
    else 
	{
        printf("\nRemaining employees:\n");
        for (i = 0; i < n - 1; i++) 
		{
            printf("Employee No: %d, Name: %s, Salary: %d, Dept No: %d\n", a[i].eno, a[i].ename, a[i].esal, a[i].deptno);
        }
    }
}
int main()
{
	int n,empNo;
	printf("Enter the no.of Employees:");
	scanf("%d",&n);
	read(n);
	search(n);
	sortByName(n);
	sortBySalary(n);
	printf("\nEnter the Employee No to delete: ");
    scanf("%d", &empNo);
    deleteEmployee(n, empNo);
	return 0;	
}
