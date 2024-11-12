    #include <stdio.h>

    int main () {
        int enterN, num1, num2, next, sum;
        char opt;       

        do {
            printf("\033[1;32mEnter a number:\033[0m ");
            scanf("%d", &enterN);

            if (enterN < 2) {
                printf("\033[1;31mInvalid input. Please enter a number greater than 1.\033[0m\n");
                continue;
            }

            num1 = 1;
            num2 = 1;
            sum = num1 + num2;

            printf("\033[1;34mSeries:\033[0m %d %d", num1, num2);

            for (int i = 3; i <= enterN; i++) {
                next = num1 + num2;
                printf(" %d", next);
                sum += next;
                num1 = num2;
                num2 = next;
            }
            printf("\033[1;33m\nSum of all:\033[0m  %d\n", sum);

            printf("\n\033[1;36mDo you want to enter another number? Y or N:\n\033[0m ");
            scanf(" %c", &opt);
        }
        while (opt == 'Y' || opt == 'y');

        printf("\033[1;32mDone.\033[0m");

        return 0;
    }
