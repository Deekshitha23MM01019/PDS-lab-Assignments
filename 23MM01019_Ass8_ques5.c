#include <stdio.h>

// Function to transpose the matrix
void transpose(int *mat, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Swap mat[i][j] and mat[j][i]
            int temp = *((mat + i * N) + j);
            *((mat + i * N) + j) = *((mat + j * N) + i);
            *((mat + j * N) + i) = temp;
        }
    }
}

// Function to reverse each row of the matrix
void reverseRows(int *mat, int N) {
    for (int i = 0; i < N; i++) {
        int start = 0;
        int end = N - 1;
        while (start < end) {
            // Swap mat[i][start] and mat[i][end]
            int temp = *((mat + i * N) + start);
            *((mat + i * N) + start) = *((mat + i * N) + end);
            *((mat + i * N) + end) = temp;
            start++;
            end--;
        }
    }
}

// Function to right rotate the matrix n times
void rightRotate(int *mat, int N, int n) {
    n %= 4; // To handle rotations greater than 4
    for (int i = 0; i < n; i++) {
        // Transpose the matrix
        transpose(mat, N);
        // Reverse each row of the transposed matrix
        reverseRows(mat, N);
    }
}

// Function to print the matrix
void printMatrix(int *mat, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *((mat + i * N) + j));
        }
        printf("\n");
    }
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int N = 4; // Size of the square matrix
    int n = 3; // Number of rotations
    
    printf("Original Matrix:\n");
    printMatrix((int *)mat, N);
    
    rightRotate((int *)mat, N, n);
    
    printf("\nMatrix after right rotation %d times:\n", n);
    printMatrix((int *)mat, N);
    
    return 0;
}



