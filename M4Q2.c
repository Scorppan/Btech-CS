#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping\n a=%d\t b=%d\n",a,b);
    swap(a, b);
    printf("After Swapping\n a=%d\t b=%d\n",a,b);
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
