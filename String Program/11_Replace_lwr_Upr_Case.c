//11. replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
main()
{
	char a[20];
	int i;
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&a);
	
	for(i=0;a[i]!=0;i++)
	{
		printf("%c",a[i]-32);
	}
}
