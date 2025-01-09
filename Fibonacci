#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms are 0 and 1
        } else {
            next = first + second; // Calculate the next term
            first = second;
            second = next;
        }
        printf("%d ", next); // Print the term
    }

    printf("\n");
    return 0;
}
