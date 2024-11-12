#include <stdio.h>

int main() {
    
    const double TRIANGLE = 0.5;
    double area;
    double base;
    double height;
    double perimeter;
    double side1;
    double side2;
    double side3;

    printf("\nEnter the base of the triangle:");
    scanf("%lf", &base);

    printf("\nEnter the height of the triangle:");
    scanf("%lf", &height);

    printf("\nEnter the first side:");
    scanf("%lf", &side1);

    printf("\nEnter the second side:");
    scanf("%lf", &side2);

    printf("\nEnter the third side:");
    scanf("%lf", &side3);

    area = TRIANGLE * base * height;
    perimeter = side1 + side2 + side3;

    printf("\narea: %lf",area);
    printf("\naperimeter: %lf",perimeter);

    return 0;

}
