#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input the sorted array elements
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Initialize binary search bounds
    low = 0;
    high = n - 1;

    // Perform binary search
    while (low <= high) {
        mid = (low + high) / 2; // Find the middle index

        if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d).\n", key, mid + 1, mid);
            return 0; // Exit if the element is found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    // If the element is not found
    printf("Element %d is not found in the array.\n", key);

    return 0;
}
