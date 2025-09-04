#include<stdio.h>
int main()
{
    int Radius, Area, Circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d",&Radius);
    Area = 3.14*Radius*Radius;
    Circumference = 2*3.14*Radius;
    printf("Area of the circle is %d\n",Area);
    printf("Circumference of the circle is %d\n",Circumference);
    return 0;
}