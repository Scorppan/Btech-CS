/*C Program to read two 1-Dimensional array
perform the addition of the same and store the
resultant in the third array.*/
#include <stdio.h>
void main()
{
    int a[20 ],b[20],c[20],n, i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of Array A\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the elements of Array B\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("Array Addition\n");
    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
    printf("The resultant array is \n");
    for(i=0;i<n;i++)
        printf("%d\n",c[i]);
}