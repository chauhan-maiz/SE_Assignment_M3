//12.accept 5 students name and store it in array

#include<stdio.h>
main()

{
	char Stud[10];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter Student[%d] Name: ",i+1);
		scanf("%s",&Stud[i]);
	}
	
		
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Student[%d] Name: %s",i+1,Stud[i]);
	}
	
}
