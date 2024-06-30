// Determine Eligibility for admision based on criteria.


#include<stdio.h>
main()
{
	int m=72,phy=65,ch=51,t_marks=188,t_mphy=137;
	printf("\n\n\t Marks obtain in Maths is %d",m);
	printf("\n\n\t Marks obtain in Physics is %d",phy);
	printf("\n\n\t Marks obtain in Chemestry is %d",ch);
	printf("\n\n\t Total Marks is %d",t_marks);
	printf("\n\n\t Total Marks obtain in Maths & Physics is %d",t_mphy);
	
	
	printf("\n\n\t---------Eligibility Criteria--------------------");
	printf("\n\n\t Marks in Maths>=65..");
	printf("\n\n\t Marks in Physics>=55..");
	printf("\n\n\t Marks in Chemestry>=50..");
	printf("\n\n\t Total in all Subjects>=190..");
	printf("\n\n\t Total Marks in Maths & Physics>=140..");
	printf("\n\n\t----------------------------------------------");
	
	if(m>=65)
	{
		if(phy>=55)
		{
			if(ch>=50)
			{
				if(t_marks>=190)
				{
					if(t_mphy>=140)
					{
						printf("\n\n\t You are Eligible for Admision.");
					}
					else
						printf("\n\n\t You are not Eligible.");
				}
				else
					printf("\n\n\t You are not Eligible.");
			}
			else
				printf("\n\n\t You are not Eligible.");
		}
		else
			printf("\n\n\t You are not Eligible.");
	}
	else 
		printf("\n\n\t You are not Eligible.");
		
}
