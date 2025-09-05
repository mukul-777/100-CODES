#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);
    if(a%2==0)
        printf("The number is even");
    else if (a%2!=0)
        printf("The number is odd");
    else
        printf("The number is zero");
    return 0;
}