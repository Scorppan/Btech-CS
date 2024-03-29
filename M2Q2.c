/*C program to read the coefficients for the equation 
ax2+bx+c=0 and display the roots of the quadratic equation with appropriate messages.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c,x1,x2,disc;
    printf("Enter the values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a == 0)
    {
        printf("Invalid Input\n");
        exit(0);
    }
    disc=b*b-4*a*c;
    if(disc>0)
    {
        printf("Roots are Real and Distinct\n");
        x1=((-b)+sqrt(disc))/(2*a);
        x2=((-b)-sqrt(disc))/(2*a);
        printf("Root1= %f\n Root2=%f\n",x1,x2);
    }
    else if(disc == 0)
    {
        printf("Roots are Real and Equal\n ");
        x1=(-b)/(2*a);
        printf("Root1 = Root2 = %f\n",x1);
    }
    else
    {
        printf("Roots are Imaginary\n");
        x1=(-b)/(2*a);
        x2=(sqrt(fabs(disc)))/(2*a);
        printf("Root1= %f +i%f\n",x1,x2);
        printf("Root2= %f -i%f\n",x1,x2);
    }
}