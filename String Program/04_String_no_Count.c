//4. count the total number of words in a string.

#include<stdio.h>
main()
{
	char str[20];
	int i,count=0;
	
	printf("\n\n\t Enter the String: ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;i++)
	{
		count++;
	}
	printf("\n\n\t Number Of Words: %d",count);
}
