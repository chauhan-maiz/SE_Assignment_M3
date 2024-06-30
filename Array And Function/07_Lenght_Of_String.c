//7.length of string without using inbuilt function

#include<stdio.h>
#include<string.h>
main()
{
	char str[7],len=0;
	printf("\n\n\t enter the string: ");
	scanf("%s",&str);
	
	len=strlen(str);
	printf("\n\n\t length: %d",len);
}
