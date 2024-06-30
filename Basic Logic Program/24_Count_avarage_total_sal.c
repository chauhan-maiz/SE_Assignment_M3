// Count avarage and total salary

#include<stdio.h>
main()

{
	int es1,es2,es3,es4,es5,total_sal,avarage_sal;
	char en1[6],en2[6],en3[6],en4[6],en5[6];
	printf("\n\n\t Enter 5 Employees Name: ");
	scanf("%s %s %s %s %s",&en1,&en2,&en3,&en4,&en5);
	
	
	printf("\n\n\t Enter %s's Salary: ",en1);
	scanf("%d",&es1);
	
	printf("\n\n\t Enter %s's Salary: ",en2);
	scanf("%d",&es2);
	
	printf("\n\n\t Enter %s's Salary: ",en3);
	scanf("%d",&es3);
	
	printf("\n\n\t Enter %s's Salary: ",en4);
	scanf("%d",&es4);
	
	printf("\n\n\t Enter %s's Salary: ",en5);
	scanf("%d",&es5);
	
	total_sal=es1+es2+es3+es4+es5;
	printf("\n\n\t Total salary is: %d",total_sal);
	avarage_sal=total_sal/5;
	printf("\n\n\t Avarage salary is:%d",avarage_sal);

	
	
}

