//15. find the largest and smallest words in a string.

#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[10][40];
	int i,j=0,k=0,m,max=0,min=50,u,x=0,y=0;
	printf("\n\n\t Enter the string: ");
	gets(a);
	
	for(i=0,k=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			j++;
			k=0;
			
		}		
		
	}
	b[j][k]='\0';
	
	for(m=0;m<=j;m++)
	{
		u=0;
		printf("%s",b[m]);
		u=strlen(b[m]);
		if(max<u)
		{
			max=u;
			x=m;
		}
		else if(u<min)
		{
			min=u;
			y=m;
		}
	}
	printf("\n\n\t largest word is: %s",b[x]);
	printf("\n\n\t smallest word is: %s",b[y]);
}
