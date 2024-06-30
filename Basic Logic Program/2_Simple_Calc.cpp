// Wap to make simple Calc

#include<stdio.h>
main()

{
	int a,b,c;
	printf("\n\n\t Enter a value of a & b: ");
	scanf("%d %d", &a, &b);
	
	// Addition
	c=a+b;
	printf("\n\n\t Addition of %d & %d = %d", a, b, c);
	
	// Substraction
	c=a-b;
	printf("\n\n\t Substraction of %d & %d = %d", a, b, c);
	
	// Multiplication
	c=a*b;
	printf("\n\n\t Multiplication of %d & %d = %d", a, b, c);
	
	// Division
	c=a/b;
	printf("\n\n\t Division of %d & %d = %d", a, b, c);

	// modual
	c=a%b;
	printf("\n\n\t Modual of %d & %d = %d", a, b, c);

	
}
