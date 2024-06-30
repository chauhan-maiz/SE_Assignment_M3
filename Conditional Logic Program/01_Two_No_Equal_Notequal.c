// Check Two Numbers Equal or not

#include<stdio.h>
main()
{
	int n1,n2;
	printf("\n\n\t Enter two Numbers: ");
	scanf("%d %d",&n1,&n2);
	
	if(n1==n2)
		printf("\n\n\t %d & %d are equal.",n1,n2);
	else
		printf("\n\n\t %d & %d are not equal.",n1,n2);
}
