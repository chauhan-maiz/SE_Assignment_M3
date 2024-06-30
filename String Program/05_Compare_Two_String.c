//5.compare two strings without using string library functions.

#include<stdio.h>
main()
{
	char a[20],b[20];
	int i,temp=0;
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&a);
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&b);
	
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		
		if(a[i]!=b[i])
		{
			temp++;
		}
	}
	
		if(temp>=1)
			printf("\n\n\t Strings are not same ");
		else
			printf("\n\n\t Strings are same");
}
