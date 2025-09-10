#include<stdio.h>
int main()
{
    int n,i;
    int a[n], b[n];
    printf("Enter the length of the array:");
    scanf("%d",&n);

    printf("Enter the array elements:\n\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d:", i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    printf("\nCopied array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
