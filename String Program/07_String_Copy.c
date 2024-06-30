// 7. Write a program in C to copy one string to another string.
#include<stdio.h>
main()
{
	char a[20],b[20];
	int i;
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&a);
	printf("\n\n\t a: %s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\n\n\t b: %s",b);
}
