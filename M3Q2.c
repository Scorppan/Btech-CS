
#include<stdio.h>
int main()
{
    int a[50],i,n, large, small, large_index,small_index;
    printf("\nEnter the number of elements :");
    scanf("%d",&n);
    printf("\nInput the array elements :" );
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    large=small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large){
            large=a[i];
            large_index=i;
        }
        if(a[i]<small){
            small=a[i];
            small_index=i;
        }   
    }
    printf("\nThe smallest element is %d found at %d\n", small, small_index);
    printf("\nThe largest element is %d found at %d\n", large, large_index);
}
    
