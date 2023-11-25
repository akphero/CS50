#include <stdio.h>
extern FILE *stdin;

int main() {
    // Declare variables to store user input
    char firstName[50], lastName[50];
    int age;

    // Prompt the user for input
    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Print the collected information
    printf("\nResults:\n");
    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Age: %d\n", age);

    

    return 0;
}
