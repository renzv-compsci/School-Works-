#include <stdio.h>
#include <string.h>

int main () {
    
    char name[50];
    int age;
    float height;
    double Pi;


    // Input user's value
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height(cm): ");
    scanf("%f", &height);

    printf("Enter PI: ");
    scanf("%lf", &Pi);

    if (age <= 0 || height <= 0 || Pi <= 0) {
        printf("Invalid Input.");
    }

    else {
    // Print user's answer  
    printf("\nYou Entered:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Height(cm): %.3f\n", height);
    printf("PI: %.15lf\n", Pi);

    }

    return 0;
}