#include <stdio.h>

// Define a structure for Address
struct Address {
    char street[100];
    char city[50];
    char zipCode[20];
};

// Define a structure for Person using Address structure
struct Person {
    char name[50];
    struct Address address;
};

int main() {
    // Create a Person variable
    struct Person person;

    // Read details for the person
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter street: ");
    scanf("%s", person.address.street);
    printf("Enter city: ");
    scanf("%s", person.address.city);
    printf("Enter zip code: ");
    scanf("%s", person.address.zipCode);

    // Print details of the person
    printf("\nPerson Details:\n");
    printf("Name: %s\n", person.name);
    printf("Address:\n");
    printf("  Street: %s\n", person.address.street);
    printf("  City: %s\n", person.address.city);
    printf("  Zip Code: %s\n", person.address.zipCode);

    return 0;
}
