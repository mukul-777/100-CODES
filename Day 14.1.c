#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for how many odd numbers to sum
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &n);

    // Loop to add first n odd numbers
    for (int i = 1, count = 0; count < n; i += 2) {
        sum += i;
        count++;
    }

    // Display the result
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
