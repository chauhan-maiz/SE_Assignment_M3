// convert temprature fahrenheit to celsius

#include<stdio.h>
main()
{
	float ft,ct;
	printf("\n\n\t Enter temprature in fahrenheit: ");
	scanf("%f",&ft);
	
	ct=(ft-32)*(5/9);
	printf("\n\n\t Temprature in celsius is: %f",ct);
}
