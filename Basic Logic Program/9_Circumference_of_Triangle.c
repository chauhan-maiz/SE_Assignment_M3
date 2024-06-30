// Circumference of triangle

#include<stdio.h>
main()

{
	int T,a,b,c; 
	printf("\n\n\t Enter the lenght of first side: ");
	scanf("%d", &a);
	printf("\n\n\t Enter the lenght of Second side: ");
	scanf("%d", &b);
	printf("\n\n\t Enter the lenght of third side: ");
	scanf("%d", &c);
	
	T= a+b+c;
	printf("\n\n\t Circumference of triangle is: %d", T);
}
