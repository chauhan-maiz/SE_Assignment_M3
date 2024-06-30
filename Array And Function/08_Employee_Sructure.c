/*8.Write a program of structure employee that provides the following 
a. information -print and display empno, empname, address andage*/

#include<stdio.h>

struct employe
{
	int empno,age;
	char empname[20],address[30];
}e;
main()
{
	printf("Enter Employee No: ");
	scanf("%d",&e.empno);
	
	printf("Enter Employee Name: ");
	scanf("%s",&e.empname);
	
	printf("Enter Address: ");
	scanf("%s",&e.address);
	
	printf("Enter the Age: ");
	scanf("%d",&e.age);
	
	printf("\n\n\t Employee No: %d",e.empno);
	printf("\n\n\t Employee Name: %s",e.empname);
	printf("\n\n\t Address: ",e.address);
	printf("\n\n\t Age: %d",e.age);
}
