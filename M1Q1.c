/*C program to swap two numbers without using
third Variable.*/
#include <stdio.h>
void main()
{
int num1,num2;
printf("\n Enter the first number: ");
scanf("%d",&num1);
printf("\n Enter the second number: ");
scanf("%d",&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("\nThe first number is %d",num1);
printf("\nThe second number is %d",num2);
}