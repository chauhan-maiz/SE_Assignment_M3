//8.reverse a string and check that the string is palindrome or not 
 #include<stdio.h>
 #include<string.h>
 main()
 {
 	char a[20],b[20];
 	int i,q=0;
 	
 	printf("\n\n\t Enter the string: ");
 	scanf("%s",&a);
 	
	strcpy(b,a);
 	strrev(b);
 	
 	for(i=0;a[i]!=0;i++)
 	{
 		if(a[i]!=b[i])
		 {
			 q++;	
		 }	
	}
		if(q>=1)
			printf("\n\n\t %s is not palidrome",a);
		else
			printf("\n\n\t %s is palidrome",a);
}
 
 
