#include <stdio.h>

// Function to check if arr1 is a subset of arr2
int isSubset(int arr1[], int m, int arr2[], int n) {
    int i, j;

    // Traverse all elements of arr1[]
    for (i = 0; i < m; i++) {
        // Check if the current element of arr1 is present in arr2
        for (j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                break;
            }
        }

        // If the current element of arr1 is not present in arr2, arr1 is not a subset
        if (j == n) {
            return 0;
        }
    }

    // If all elements of arr1 are present in arr2, arr1 is a subset
    return 1;
}

int main() {
    int m, n;

    // Get user input for sizes of arrays
    printf("Enter the size of array 1: ");
    scanf("%d", &m);

    printf("Enter the size of array 2: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];

    // Get user input for elements of arrays
    printf("Enter the elements of array 1:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of array 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Check if arr1 is a subset of arr2
    if (isSubset(arr1, m, arr2, n)) {
        printf("Array 1 is a subset of Array 2.\n");
    } else {
        printf("Array 1 is not a subset of Array 2.\n");
    }

    return 0;
}
