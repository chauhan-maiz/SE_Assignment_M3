/*8.b. Write a program of structure for five employee 
that provides the following information -print and 
display empno, empname, address andage */
#include<stdio.h>

struct employe
{
	int empno,age;
	char empname[20],address[30];
}e[5];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
	
	printf("\n\n\t Enter Employee No[i]: ",i+1);
	scanf("%d",&e[i].empno);
	
	printf("\n\n\t Enter Employee Name[i]: ",i+1);
	scanf("%s",&e[i].empname);
	
	printf("\n\n\t Enter address[i]: ",i+1);
	scanf("%s",&e[i].address);
	
	printf("\n\n\t Enter the age[i]: ",i+1);
	scanf("%d",&e[i].age);
	}
	for(i=0;i<5;i++)
	{
		
	printf("\n\n\t Employee No: %d",e[i].empno);
	printf("\n\n\t Employee Name: %s",e[i].empname);
	printf("\n\n\t Address: %s",e[i].address);
	printf("\n\n\t Age: %d",e[i].age);
	}
}
