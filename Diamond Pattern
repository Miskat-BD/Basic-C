#include <stdio.h>

int main() {
    int n, i, j, space;

    // Input the number of rows for the diamond
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generate the upper half of the diamond
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Generate the lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
