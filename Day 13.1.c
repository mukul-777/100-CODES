#include<stdio.h>
int main()
{
    int num1, num2;
    char operator;
    printf("Enther the number num1\n");
    scanf("%d", &num1);
    printf("Enter the operator(+,-,*,/,%%)\n");
    scanf(" %c", &operator);
    printf("Enter the number num2\n");
    scanf("%d", &num2);
    switch(operator)
    {
        case '+':
            printf("The sum is %d\n", num1 + num2);
            break;
        case '-':
            printf("The difference is %d\n", num1 - num2);
            break;
        case '*':
            printf("The product is %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("The quotient is %d\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if(num2 != 0)
                printf("The remainder is %d\n", num1 % num2);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}