#include <stdio.h>

int main() {

    int temperature[3][7] = {
        {30, 32, 31, 29, 28, 32, 29},  
        {29, 28, 31, 28, 29, 28, 30}, 
        {30, 32, 29, 31, 32, 33, 29} 
    };
    
    char *cities[3] = {"Manila City", "Quezon City", "Antipolo City"};
    
    printf("                Mon   Tue   Wed   Thu   Fri   Sat   Sun\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%-14s   ", cities[i]);  
        for (int j = 0; j < 7; j++) {
            printf("%-6d", temperature[i][j]);  
        }
        printf("\n");
    }   

    return 0;
}