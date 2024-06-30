// check Uppercase,Lowercase,Specialchar,Number

#include<stdio.h>
main()
{
	char c;
	printf("\n\n\t Enter a Character to check: ");
	scanf("%c",&c);
	
	if(c>=65 && c<=90)
		printf("\n\nt You entered Uppercase.");
	else if(c>=97 && c<=122)
		printf("\n\n\t You entered Lowecase.");
	else if(c>=48 && c<=57)
		printf("\n\n\t You entered Number.");
	else 
		printf("\n\n\t You entered Special charcter.");
}
