// find avarage of expense

#include<stdio.h>
main()
{
	int ex1,ex2,ex3,ex4,ex5,total_ex,avarage_ex;
	printf("\n\n\t Enter 1st expense: ");
	scanf("%d",&ex1);
	printf("\n\n\t Enter 2nd expense: ");
	scanf("%d",&ex2);
	printf("\n\n\t Enter 3rd expense: ");
	scanf("%d",&ex3);
	printf("\n\n\t Enter 4th expense: ");
	scanf("%d",&ex4);
	printf("\n\n\t Enter 5th expense: ");
	scanf("%d",&ex5);
	
	total_ex=ex1+ex2+ex3+ex4+ex5;
	avarage_ex=total_ex/5;
	
	printf("\n\n\t Avarage of expense is: %d",avarage_ex);
}
