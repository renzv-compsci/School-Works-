#include <stdio.h>
#include <string.h>

void studentInfo(char course [100], char name [100], char studentID [100], int*grade);
void inputGrade(int*grade);
void errorDistrib(char course [100], char name [100], char studentID [100], int grade);
void finalPrint(char course [100], char name [100], char studentID [100], int grade);

int main () {
    
    int grade;
    char studentID [100];
    char name [100];
    char course [100];


    studentInfo(course, name, studentID, &grade);
    
    
    if (grade >= 0 && grade <= 100) {
        inputGrade(&grade);
        finalPrint(course, name, studentID, grade); 
    }

    else {
        errorDistrib(course, name, studentID, grade);
    }

    return 0; 
}


void studentInfo(char course [100], char name [100], char studentID [100], int*grade)

{
    printf("Enter your name: ");
    fgets(name, 100, stdin);

    printf("Enter your student id: ");
    fgets(studentID, 100, stdin);

    printf("Enter your course: ");
    fgets(course, 100, stdin);

    printf("Enter your grade (0-100): ");
    scanf("%d", grade);
}

void inputGrade(int*grade)

{
    switch (*grade / 10) {
        case 10: // If grade is 100
        case 9:
            printf("You passed. Your grade is A.\n");
            break;
        case 8:
            printf("You passed. Your grade is B.\n");
            break;
        case 7:
            printf("You passed. Your grade is C.\n");
            break;
        case 6:
            printf("You passed. Your grade is D.\n");
            break;
        default:
            printf("You failed. Your grade is F.\n");
            break;
    }
}    

void errorDistrib(char course [100], char name [100], char studentID [100], int grade)

{
    if (grade < 0 || grade > 100) {
    printf("Invalid grade. Please enter a grade between 0 and 100\n");
    }
}

void finalPrint(char course [100], char name [100], char studentID [100], int grade)

{
    printf("\nYou Entered:\n");
    printf("Name: %s", name);
    printf("Student id: %s", studentID);
    printf("Course: %s", course);
    printf("Grade: %d", grade);
}