#include<stdio.h>
int main()
{
    int Celcius , Farenheit;
    printf("Enter temperature in Celcius: ");
    scanf("%d",&Celcius);
    Farenheit = (Celcius * 9/5) + 32;
    printf("Temperature in Farenheit is: %d",Farenheit);
    return 0;
}