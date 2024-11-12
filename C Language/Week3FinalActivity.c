#include <stdio.h>
#include <string.h>

void userInput(char name[100], int*age, float*heightcm, double*valuePi);
void finalOutput(char name[100], int age, float heightcm, double valuePi);

int main () {
    char name [100];
    int age;
    float heightcm;
    double valuePi;  

    userInput(name, &age, &heightcm, &valuePi);

    finalOutput(name, age, heightcm, valuePi);

    return 0; 
}


void userInput(char name[100], int*age, float*heightcm, double*valuePi)

{
    printf("Enter your name: ");
    fgets(name, 100, stdin);

    printf("Enter your age: ");
    scanf("%d", age);

    printf("Enter your height (cm): ");
    scanf("%f", heightcm);

    printf("Enter PI: ");
    scanf("%lf", valuePi);
 
}


void finalOutput(char name[100], int age, float heightcm, double valuePi)

{  
    if (age <= 0 && heightcm <= 0 && valuePi <=0) {
        printf("Invalid Output. Enter a valid age, height, and pi.\n");
    }

    else if (age <= 0 && heightcm <= 0) {
        printf("Invalid Output. Enter a valid age and height.");
    }

    else if (age <= 0 && valuePi <= 0) {
        printf("Invalid Output. Enter a valid age and pi.");
    }

    else if (heightcm <= 0 && valuePi <=0) {
        printf("Invalid Output. Enter a valid height and pi.");
    }

    else if (age <= 0) {
        printf("Invalid Output. Enter a valid age.");
    }

    else if (heightcm <= 0) {
        printf("Invalid Output. Enter a valid height in cm.");
    }

    else if (valuePi <= 0 ) {
        printf("Invalid Output. Enter a valid value.");
    }

    else {
    printf("\nYou Entered:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Height(cm): %.3f\n", heightcm);
    printf("PI: %.15lf\n", valuePi);
    }
    
}
