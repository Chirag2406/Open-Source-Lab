#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("The elements are\n");
     for(i=0;i<n;i++)
     {
        printf("%d\n",arr[i]);
     }
     return 0;
}