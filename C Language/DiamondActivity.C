#include <stdio.h>

int main() {
    
    int n = 5;  
    int toph, st, space;
    
    for (toph = 1; toph <= n; toph++) {
        
        for (space = 1; space <= n - toph; space++) {
            printf(" ");
        }
        for (st = 1; st <= 2 * toph - 1; st++) {  
            printf("*");
        }
        printf("\n");
    }

    for (toph = n - 1; toph >= 1; toph--) {

        for (space = 1; space <= n - toph; space++) {
            printf(" ");
        }

        for (st = 1; st <= 2 * toph - 1; st++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}