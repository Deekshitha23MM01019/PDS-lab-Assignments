#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(const char *str1, const char *str2) {
    // Calculate lengths of the strings
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    // Allocate memory for the concatenated string
    char *concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    
    // Check if memory allocation was successful
    if (concatenated == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    // Copy the first string to the concatenated string
    strcpy(concatenated, str1);
    
    // Concatenate the second string to the concatenated string
    strcat(concatenated, str2);
    
    return concatenated;
}

int main() {
    char *str1, *str2;
    
    // Input first string
    printf("Enter the first string: ");
    scanf("%ms", &str1); // %ms is used for dynamically allocating memory for the input string
    
    // Input second string
    printf("Enter the second string: ");
    scanf("%ms", &str2); // %ms is used for dynamically allocating memory for the input string
    
    // Concatenate the strings
    char *result = concatenateStrings(str1, str2);
    
    // Print the concatenated string
    printf("Concatenated string: %s\n", result);
    
    // Free dynamically allocated memory
    free(str1);
    free(str2);
    free(result);
    
    return 0;
}
