//14.combine two strings manually

#include<stdio.h>
main()
{
	char a[20],b[20];
	int i;
	
	printf("Enter the string: ");
	scanf("%s",&a);
	
	printf("Enter the string: ");
	scanf("%s",&b);
	
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
		printf("%s",b);
}
