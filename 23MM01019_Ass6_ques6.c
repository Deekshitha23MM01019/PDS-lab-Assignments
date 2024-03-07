#include <stdio.h>

// Function to calculate and print the average temperature of each city
void calculateAverageTemperature(int temperature[][7], int numCities) {
    printf("City-wise average temperatures for the week:\n");

    for (int i = 0; i < numCities; i++) {
        int totalTemperature = 0;

        // Calculate total temperature for the current city
        for (int j = 0; j < 7; j++) {
            totalTemperature += temperature[i][j];
        }

        // Calculate and print the average temperature for the current city
        double averageTemperature = (double)totalTemperature / 7;
        printf("City %d: %.2f\n", i + 1, averageTemperature);
    }
}

int main() {
    int numCities;

    // Get user input for the number of cities
    printf("Enter the number of cities: ");
    scanf("%d", &numCities);

    int temperature[numCities][7];  // Assuming a week has 7 days

    // Get user input for temperature of each city for a week
    printf("Enter the temperature of cities for a week:\n");

    for (int i = 0; i < numCities; i++) {
        printf("City %d:\n", i + 1);
        for (int j = 0; j < 7; j++) {
            printf("Day %d: ", j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }

    // Calculate and print the average temperature for each city
    calculateAverageTemperature(temperature, numCities);

    return 0;
}
