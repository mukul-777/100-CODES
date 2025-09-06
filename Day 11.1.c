#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch(month)
    {
        case 1:
        printf("January and it has 31 days\n");
        break;
        case 2:
        printf("February and it has 28 or 29 days\n");
        break;
        case 3:
        printf("March and it has 31 days\n");
        break;
        case 4:
        printf("April and it has 30 days\n");
        break;
        case 5:
        printf("May and it has 31 days\n");
        break;
        case 6:
        printf("June and it has 30 days\n");
        break;
        case 7:
        printf("July and it has 31 days\n");
        break;
        case 8:
        printf("August and it has 31 days\n");
        break;
        case 9:
        printf("September and it has 30 days\n");
        break;
        case 10:
        printf("October and it has 31 days\n");
        break;
        case 11:
        printf("November and it has 30 days\n");
        break;
        case 12:
        printf("December and it has31 days\n");
        break;
        default:
            printf("Invalid month number\n");
    }
    return 0;
}