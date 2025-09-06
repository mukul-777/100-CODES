#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float discriminant, root1, root2;
    
    printf("Enter the coefficients a,b and c of the quadratic equation ax^2 + bx + c = 0\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a==0)
    {
        printf("The equation is not quadratic\n");
        return 0;
    }
    
    discriminant = b*b - 4*a*c;
    
    if(discriminant > 0)
    {
        printf("Roots are real and distinct\n");
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if(discriminant == 0)
    {
        printf("Roots are real and equal\n");
        root1 = root2 = -b/(2*a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        printf("Roots are imaginary\n");
        float realPart = -b/(2*a);
        float imagPart = sqrt(-discriminant)/(2*a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    
    return 0;
}