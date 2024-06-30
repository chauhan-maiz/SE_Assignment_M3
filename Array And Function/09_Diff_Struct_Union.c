//9. difference between Structure and Union. 

#include<stdio.h>

struct student //use union to see diffrence
{
	int rollno,sage;
	char sname[20],sadd[30];
}S;
main()
{
	printf("\n\n\t Enter Rollno: ");
	scanf("%d",&S.rollno);
	
	printf("\n\n\t Enter Name=");
	scanf("%s",&S.sname);
	
	printf("\n\n\t Enter Address: ");
	scanf("%s",&S.sadd);
	
	printf("\n\n\t Enter the Age: ");
	scanf("%d",&S.sage);
	
	printf("\n\n\t Rollno: %d",S.rollno);
	printf("\n\n\t Name: %s",S.sname);
	printf("\n\n\t Address: %s",S.saddress);
	printf("\n\n\t Age: %d",S.sage);
}
