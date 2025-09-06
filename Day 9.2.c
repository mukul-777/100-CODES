#include<stdio.h>
int main()
{
    int Percentage;
    printf("Enthe the Percentage\n");
    scanf("%d",&Percentage);
    if(Percentage>=90 && Percentage<=100)
    printf("Grade A\n");
    else if(Percentage>=80 && Percentage<=89)
    printf("Grade B\n");
    else if(Percentage>=70 && Percentage<=79)
    printf("Grade C\n");
    else if(Percentage>=60 && Percentage<=69)
    printf("Grade D\n");
    else if(Percentage<60)
    printf("Grade F\n");
    return 0;
}