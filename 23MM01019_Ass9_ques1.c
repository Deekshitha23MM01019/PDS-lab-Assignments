#include <stdio.h>

// Define the structure named company
struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    // Declare a variable of type struct company
    struct company comp;

    // Read company details from the user
    printf("Enter company name: ");
    scanf("%[^\n]%*c", comp.name); // %[^\n]%*c is used to read strings with spaces
    printf("Enter company address: ");
    scanf("%[^\n]%*c", comp.address);
    printf("Enter company phone: ");
    scanf("%[^\n]%*c", comp.phone);
    printf("Enter number of employees: ");
    scanf("%d", &comp.noOfEmployee);

    // Display company details
    printf("\nCompany Details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}
