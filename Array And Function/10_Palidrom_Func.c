//10. Palindrome number using for loop and function 

#include<stdio.h>

void palid();
main()
{
	
	palid();
}
void palid()
{
	int i=0,a,temp,rem,rev;
		printf("\n\n\t Enter the Number: ");
		scanf("%d",&a);
		temp=a;
		
	for(i=a;a!=0;a=a/10)
	{
		rem=a%10;
		rev=(rev*10)+rem;
	}
	if(rev==temp)
		printf("\n\n\t %d Number is Palindrom.",temp);
	else
		printf("\n\n\t %d Number is not Palindrom.",temp);
		
		

}
