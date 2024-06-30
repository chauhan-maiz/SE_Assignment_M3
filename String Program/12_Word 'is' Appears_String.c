//12. find the number of times a given word 'is' appears in the given string.

#include<stdio.h>
main()
{
	char a[20];
	int i,q=0;
	printf("\n\n\t Enter the string: ");
	gets(a);
	printf("\n\n\t String: ");
	puts(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='i')
		{
			i++;
			if(a[i]=='s')
			{
				q++;
			}
		}
	}
	printf("%d",q);
}
