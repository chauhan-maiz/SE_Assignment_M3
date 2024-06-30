//8. count the total number of vowels or consonants in a string. 
#include<stdio.h>
main()
{
	char a[20];
	int i,v=0,c=0;
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='A' || a[i]=='E' || a[i]=='e'||
		a[i]=='i'|| a[i]=='I' || a[i]=='o' || a[i]=='O' ||
		a[i]=='u' || a[i]=='U')
			v++;
		else
			c++;
	}
	printf("\n\n\t vowel: %d",v);
	printf("\n\n\t consonant: %d",c);
}
