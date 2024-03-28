#include <stdio.h>

// Define a structure to represent student details
struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};

// Function to read student details
void readStudentDetails(struct student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &(s->rollNo));
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Address: ");
    scanf("%s", s->address);
    printf("Enter Age: ");
    scanf("%d", &(s->age));
    printf("Enter Average Marks: ");
    scanf("%f", &(s->averageMarks));
}

// Function to display student details
void displayStudentDetails(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Age: %d\n", s.age);
    printf("Average Marks: %.2f\n", s.averageMarks);
}

int main() {
    struct student students[6];

    // Read details for each student
    for (int i = 0; i < 6; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        readStudentDetails(&students[i]);
    }

    // Display details of each student
    for (int i = 0; i < 6; i++) {
        displayStudentDetails(students[i]);
    }

    return 0;
}
