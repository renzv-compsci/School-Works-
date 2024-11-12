#include <stdio.h>
#include <ctype.h>

int main () {

    float usd_to_php = 55.87;
    float eur_to_usd = 1.11;
    float php_to_eur = 0.016;   

    int choice;
    float amount, convertedAmount;

    printf("Currency Converter\n");
    printf("1. Convert from USD to PHP\n");
    printf("2. Convert from EUR to USD\n");
    printf("3. Convert from PHP to EUR\n");
    printf("Enter your choice (1-3):");
    scanf("%d",&choice);

 switch (choice) {
        case 1:
            printf("Enter the amount in USD: ");
            scanf("%f", &amount);
            convertedAmount = amount * usd_to_php;
            printf("%.2f USD is equivalent to %.2f PHP\n", amount, convertedAmount);
            break;

        case 2:
            printf("Enter the amount in EUR: ");
            scanf("%f", &amount);
            convertedAmount = amount * eur_to_usd;
            printf("%.2f EUR is equivalent to %.2f USD\n", amount, convertedAmount);
            break;

        case 3:
            printf("Enter the amount in PHP: ");
            scanf("%f", &amount);
            convertedAmount = amount * php_to_eur;
            printf("%.2f PHP is equivalent to %.2f EUR\n", amount, convertedAmount);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;

}