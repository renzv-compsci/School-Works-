#include <stdio.h>

int checkAge (int check)
{
    return (check >= 18) ? 1 : 0;
}

int main ()

{
    int check; 

    printf("Enter your age: ");
    scanf("%d", &check);

    if (checkAge (check)) {
        printf("%d is adult", check);
    }

    else {
        printf("%d is minor", check);
    }

    return 0;  
}

