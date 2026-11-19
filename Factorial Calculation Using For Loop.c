#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial using for loop
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}
