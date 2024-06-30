// Accept 5 name from user at rum time

#include<stdio.h>
main()
{
	int i;
	char name[20];

	i=0;

	while(i<5)
	{
		printf("\n\n\t Enter Name[%d]: ",i+1);
		scanf("%s",&name[i]);
		i++;
	}
	
	i=0;
	
	while(i<5)
	{
		printf("%s",name[i]);
		i++;
	}
	printf("\n");
	
}

