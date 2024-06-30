//13.remove characters from a string except alphabets.

#include<stdio.h>
main()
{
	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&a);
	printf("Answer: ");
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
			printf("%c",a[i]);
		}
		i++;
		
	}
}
