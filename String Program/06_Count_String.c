//6. count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
main()
{
	char str[20],i;
	int s=0,sy=0,d=0;	
	printf("\n\n\t Enter the string: ");
	scanf("%s",&str);

	
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='a' && str[i]<='z')
			s++;
		else if(str[i]>='A' && str[i]<='Z')
			s++;
		else if(str[i]>='0' && str[i]<='9')	
			d++;
		else if((str[i]>=33 && str[i]<=47)|| 
		(str[i]>=58 && str[i]<=64) || (str[i]>=91
		&& str[i]<=96 )|| (str[i]>=123 && str[i]<=
		126))
			sy++;
	}	
	printf("\n\n\t alphabets: %d",s);
	printf("\n\n\t special character: %d",sy);
	printf("\n\n\t digits: %d",d);
}
