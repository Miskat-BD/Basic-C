#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Ask the user for the limit
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: \n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime (1 means true)

        // Check divisibility
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number (0 means false)
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i); // Print the prime number
        }
    }

    printf("\n");
    return 0;
}
