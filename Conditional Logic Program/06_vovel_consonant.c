// find char is vovel or consonant

#include<stdio.h>
main()
{
	char c;
	printf("\n\n\t Ener a Character: ");
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		printf("\n\n\t Character is vovel.");
	else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("\n\n\t Character is Consonant.");
	else 
		printf("\n\n\t Character is consonant.");
}
