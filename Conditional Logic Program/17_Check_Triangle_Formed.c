// check whether a triangle can be formed with the given values

#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t Enter a three angle of triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a+b+c)==180)
		printf("\n\n\t Triangle is formed.");
	else
		printf("\n\n\t Triangle is not formed.");
}
