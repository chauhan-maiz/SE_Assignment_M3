// insurance Premium based on salary 

#include<stdio.h>
main()

{
	int sal, y, mp;
	printf("\n\n\t Enter your salary: ");
	scanf("%d",&sal);
	printf("\n\n\t Enter your policy term in years: ");
	scanf("%d",&y);
	mp=sal/(y*12);
	printf("\n\n\t Your monthly Premium is: %d", mp);
	
}
