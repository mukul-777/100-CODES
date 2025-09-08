#include <stdio.h>

int main() {
    int n;

    // Ask the user for the value of n
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Move to the next line after printing all numbers
    return 0;
}

