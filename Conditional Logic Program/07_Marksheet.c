// accept marks form user and check pass or fail

#include<stdio.h>
main()
{
	int s1, s2, s3, s4, s5, total=0;
	float per;
	
	printf("\n\n\t Input Marks for Subject-1 : ");
	scanf("%d",&s1);
	printf("\n\n\t Input Marks for Subject-2 : ");
	scanf("%d",&s2);
	printf("\n\n\t Input Marks for Subject-3 : ");
	scanf("%d",&s3);
	printf("\n\n\t Input Marks for Subject-4 : ");
	scanf("%d",&s4);
	printf("\n\n\t Input Marks for Subject-5 : ");
	scanf("%d",&s5);
	
	if(s1<=39)
		printf("\n\n\t Grade: F");
	else if (s2<=39)
		printf("\n\n\t Grade: F");
	else if (s3<=39)
		printf("\n\n\t Grade: F");
	else if(s4<=39)
		printf("\n\n\t Grade: F");
	else if(s5<=39)
		printf("\n\n\t Grade: F");
	else 
	{
	
			
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t Percentage : %f", per);
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
	{
		if(per>=70)
			printf("\n\n\t Grade : A+");
		
		else if(per>=60)
			printf("\n\n\t Grade : A");
	
		else if(per>=50)
			printf("\n\n\t Grade : B");
	
		else if(per>=40)
			printf("\n\n\t Grade : C");
		
	}
	else 
		printf("\n\n\t Grade : Fail");
    }
	
	
}
