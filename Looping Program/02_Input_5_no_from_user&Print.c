// Wap accept 5 no from user and print all

#include<stdio.h>
int main()
{
 int i=0, number;
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("Enter your Number: ");
  scanf("%d",&number);
 }
 //Logic to print number array.
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("%d \n", number);
 }
}
