# include <stdio.h>

int main () {
    float num1, num2, result;
    char operator;

    printf("Enter desired operator: ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;
        
        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 !=0) {
                result = num1 / num2;
            }

            else {
                printf("Syntax Error!\n");
            }
            break;   

        default:
            printf("Invalid Operator!\n");

    }

    if (result == (int)result) {
        printf("Result: %d\n", (int)result);
    }

    else {
        printf("Result %.2f", result);
    }

    return 0;

}