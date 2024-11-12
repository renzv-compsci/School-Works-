#include <stdio.h>

int findODDeven (int number)
{
    return (number % 2) ? 1 : 0;
}

int main ()
{
    int number;

    printf("Enter number: ");
    scanf("%d,", &number);

    if(findODDeven(number)) {
        printf("%d is odd.\n", number);
    }

    else {
        printf("%d is even.\n", number);
    }
    return 0;
}



