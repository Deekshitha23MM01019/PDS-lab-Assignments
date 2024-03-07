#include <stdio.h>

// Function to calculate the average of an integer array
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to print elements greater than the average
void printGreaterThanAverage(int arr[], int size, float average) {
    printf("Elements greater than the average (%.2f) are:\n", average);
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            printf("%d\n", arr[i]);
        }
    }
}

int main() {
    int size;

    // Get user input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Get user input for the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the average of the array elements
    float average = calculateAverage(arr, size);

    // Print elements greater than the average
    printGreaterThanAverage(arr, size, average);

    return 0;
}
