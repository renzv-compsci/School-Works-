#include <stdio.h>

void displayInfo() {

    static char fullName[] = "Renz Jerik C. Viloria";
    static int age = 18;
    static char studentID[] = "2024-1000234";
    static char course[] = "Bachelor of Science in Computer Science specialization in Machile Learning";


    printf("Full Name: %s\n", fullName);
    printf("Age: %d\n", age);
    printf("Student ID: %s\n", studentID);
    printf("Course: %s\n", course);
}

int main() {

    displayInfo();
    return 0;
}