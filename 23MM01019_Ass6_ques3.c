#include <stdio.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse an array using recursion
void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return; // Base case: array is reversed
    }

    // Swap the elements at start and end indices
    swap(&arr[start], &arr[end]);

    // Recursively call the function with updated indices
    reverseArray(arr, start + 1, end - 1);
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Get user input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get user input for array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array using recursion
    reverseArray(arr, 0, n - 1);

    // Print the reversed array
    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}
