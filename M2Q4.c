/*C program to print Fibonacci series up to n
numbers*/
#include<stdio.h>
void main()
{
    int n,i,fib1,fib2,fib3=0;
    printf("Enter the number of series to to be genetared:");
    scanf("%d",&n);
    fib1=0;
    fib2=1;
    if(n==1)
        printf("%d\n",fib1);
    else if(n==2) 
        printf("%d\n%d\n",fib1,fib2);
    else
        printf("%d\n%d\n",fib1,fib2);
    for(i=3;i<=n;i++)
    {
        fib3=fib1+fib2;
        printf("%d\n",fib3);
        fib1=fib2;
        fib2=fib3;
    }
 }