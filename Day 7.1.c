#include<stdio.h>
int main()
{
    int Year;
    printf("Enter a year: ");
    scanf("%d", &Year);
    if (Year % 4 == 0)
    {
        if (Year % 100 == 0)
        {
            if (Year % 400 == 0)
                printf("%d is a leap year.\n", Year);
            else
                printf("%d is not a leap year.\n", Year);
        }
        else
            printf("%d is a leap year.\n", Year);
    }
    else
        printf("%d is not a leap year.\n", Year);
}