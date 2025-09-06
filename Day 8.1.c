#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
        printf("The character is Upper case letter \n");
    else if(ch>='a'&& ch<='z')
        printf("The character is Lower case letter \n");
    else if(ch>='0'&& ch<='9')
        printf("The character is Digit \n");
    else
        printf("The character is Special symbol \n");
    return 0;
}