#include <stdio.h>
#include <string.h>

// Function prototypes
void getInput(char name[], int *age, float *height, double *piValue);
void printOutput(char name[], int age, float height, double piValue);

int main() {
    // Declare variables
    char name[50];
    int age;
    float heightcm;
    double valuePi;

    // Input user's value
    getInput(name, &age, &heightcm, &valuePi);

    // Print user's answer
    printOutput(name, age, heightcm, valuePi);

    return 0;
}

void getInput(char name[], int *age, float *height, double *piValue) {
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    if (scanf("%d", age) != 1) {
        printf("Invalid input. Please enter a valid age.\n");
        while (getchar() != '\n'); // Clear the input buffer
        *age = 0; // Set a default value or handle the error as needed
    }

    printf("Enter your height (cm): ");
    if (scanf("%f", height) != 1) {
        printf("Invalid input. Please enter a valid height.\n");
        while (getchar() != '\n'); // Clear the input buffer
        *height = 0.0; // Set a default value or handle the error as needed
    }

    printf("Enter Pi: ");
    if (scanf("%lf", piValue) != 1) {
        printf("Invalid input. Please enter a valid value for Pi.\n");
        while (getchar() != '\n'); // Clear the input buffer
        *piValue = 0.0; // Set a default value or handle the error as needed
    }
}

void printOutput(char name[], int age, float height, double piValue) {
    printf("\nYou Entered:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Height: %.3f\n", height);
    printf("Pi: %.15lf\n", piValue);
}
