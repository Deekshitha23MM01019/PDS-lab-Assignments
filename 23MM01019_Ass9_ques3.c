#include <stdio.h>

// Define a structure to represent a Date
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two Date structures
int compareDates(struct Date date1, struct Date date2) {
    if (date1.year > date2.year) {
        return 1;
    } else if (date1.year < date2.year) {
        return -1;
    } else { // If years are equal, compare months
        if (date1.month > date2.month) {
            return 1;
        } else if (date1.month < date2.month) {
            return -1;
        } else { // If months are equal, compare days
            if (date1.day > date2.day) {
                return 1;
            } else if (date1.day < date2.day) {
                return -1;
            } else { // If days are also equal
                return 0;
            }
        }
    }
}

int main() {
    // Example dates
    struct Date date1 = {12, 3, 2023};
    struct Date date2 = {15, 3, 2023};

    // Compare dates
    int result = compareDates(date1, date2);

    // Display result
    if (result == 1) {
        printf("Date 1 is later.\n");
    } else if (result == -1) {
        printf("Date 1 is earlier.\n");
    } else {
        printf("Both dates are the same.\n");
    }

    return 0;
}
