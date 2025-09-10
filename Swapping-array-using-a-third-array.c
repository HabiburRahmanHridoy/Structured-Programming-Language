//id: 02724205101185
#include<stdio.h>
int main()
{
    printf("//id: 02724205101196\n\n");
    int a, b, temp;
    printf("Enter a value for a:");
    scanf("%d",&a);
    printf("Enter a value for b:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("\na=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}
