// find area of rectangular prism

#include<stdio.h>
main()

{
	int A, w,l,h;
	printf("\n\n\t Enter the lenght, Width & hight: ");
	scanf("%d %d %d", &w, &l, &h);
	A=2*((w*l)+(h*l)+(h*w));
	printf("\n\n\t Area of Rectangular Prism is: %d", A);
}
