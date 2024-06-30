// Country's name in abbreviated form

#include<stdio.h>
main()
{
	char str[20];
	printf("\n\n\t Enter Country Name: ");
	gets(str);
	printf("\n\n\t abbreviated Form: %c %c",str[0],str[7]);
}
