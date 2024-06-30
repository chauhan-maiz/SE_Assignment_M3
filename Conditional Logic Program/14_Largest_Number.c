// Wap to find largest of three numbers.

#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("\n\n\t Enter any three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2)
		printf("\n\n\t %d is largest number.",n1);
	else if(n1>n3)
		printf("\n\n\t %d is largest Number.",n1);
	else if(n2>n3)
		printf("\n\n\t %d is largest number",n2);
	else
		printf("\n\n\t %d is largest number",n3);
		
	
}
