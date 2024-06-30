// School name in short form

#include<stdio.h>
main()

{
	char str[20];
	printf("\n\n\t Enter Your School Name: ");
	gets(str);
	printf("\n\n\t Short form of School Name: %c %c %c %c",str[0],str[6],str[19],str[33]);
}
