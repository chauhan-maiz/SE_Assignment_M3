//10. extract a substring from a given string

#include<stdio.h>
main()
{
	char a[20];
	int j,p,l;
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&a);
	
	printf("\n\n\t Enter the start pos: ");
	scanf("%d",&p);
	
	printf("\n\n\t Enter the length: ");
	scanf("%d",&l);
	
		for(j=p;j<=p+l;j++)
		{
			printf("%c",a[j]);
		}
	
}
