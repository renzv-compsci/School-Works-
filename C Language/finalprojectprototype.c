#include <stdio.h>
#include <string.h>

//Recto up to Antipolo (Single Journey Fare Matrix)
#define Recto_to_Legarda 15.00
#define Recto_to_Pureza 20.00
#define Recto_to_VMapa 20.00
#define Recto_to_JRuiz 20.0
#define Recto_to_Gilmore 25.00
#define Recto_to_BettyGo 25.00
#define Recto_to_Cubao 25.00
#define Recto_to_Anonas 25.00
#define Recto_to_Katipunan 30.00
#define Recto_to_Santolan 30.00
#define Recto_to_Marikina 35.00
#define Recto_to_Antipolo 35.00

//Legarda up to Antipolo (Single Journey Fare Matrix)
#define Legarda_to_Recto 15.00
#define Legarda_to_Pureza 15.00
#define Legarda_to_VMapa 20.00
#define Legarda_to_JRuiz 20.00
#define Legarda_to_Gilmore 20.00
#define Legarda_to_BettyGo 25.00
#define Legarda_to_Cubao 25.00
#define Legarda_to_Anonas 25.00
#define Legarda_to_Katipunan 25.00
#define Legarda_to_Santolan 30.00
#define Legarda_to_Marikina 30.00
#define Legarda_to_Antipolo 35.00

//Pureza up to Antipolo (Single Journey Fare Matrix)
#define Pureza_to_Recto 20.00
#define Pureza_to_Legarda 15.00
#define Pureza_to_VMapa 15.00
#define Pureza_to_JRuiz 20.00
#define Pureza_to_Gilmore 20.00
#define Pureza_to_BettyGo 20.00
#define Pureza_to_Cubao 20.00
#define Pureza_to_Anonas 25.00
#define Pureza_to_Katipunan 25.00
#define Pureza_to_Santolan 30.00
#define Pureza_to_Marikina 30.00
#define Pureza_to_Antipolo 30.00


int main () {

    char station [50];
    char endStation [50];
    float amount = 0.0;
    float value;

        printf("Welcome to LRT Line 2\n");
        
        printf("Where would you like to go? ");
        scanf("%s",&endStation);

        printf("Enter your origin station: ");
        scanf("%s", &station);

        printf("Enter your desired destination: ");
        scanf("%s", &endStation);

        //Recto up to Antipolo Station - Single Journey Fare Matrix
        if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Legarda") == 0) {
            amount = Recto_to_Legarda; 
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Pureza") == 0) {
            amount = Recto_to_Pureza;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "V.Mapa") == 0) {
            amount = Recto_to_VMapa;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "J.Ruiz") == 0) {
            amount = Recto_to_JRuiz;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Gilmore") == 0) {
            amount = Recto_to_Gilmore;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Betty Go") == 0) {
            amount = Recto_to_BettyGo;
        }
        
        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Cubao") == 0) {
            amount = Recto_to_Cubao;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Anonas") == 0) {
            amount = Recto_to_Anonas;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Katipunan") == 0) {
            amount = Recto_to_Katipunan;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Santolan") == 0) {
            amount = Recto_to_Santolan;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Marikina") == 0) {
            amount = Recto_to_Marikina;
        }

        else if (strcmp(station, "Recto") == 0 && strcmp(endStation, "Antipolo") == 0) {
            amount = Recto_to_Antipolo;
        }

        // Legarda up to Antipolo Station - Single Journey Fare Matrix
        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Recto") == 0) {
            amount = Legarda_to_Recto;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Pureza") == 0) {
            amount = Legarda_to_Pureza;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "V.Mapa") == 0) {
            amount = Legarda_to_VMapa;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "J.Ruiz") == 0) {
            amount = Legarda_to_JRuiz;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Gilmore") == 0) {
            amount = Legarda_to_Gilmore;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Betty Go") == 0) {
            amount = Legarda_to_BettyGo;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Cubao") == 0) {
            amount = Legarda_to_Cubao;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Anonas") == 0) {
            amount = Legarda_to_Anonas;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Katipunan") == 0) {
            amount = Legarda_to_Katipunan;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Santolan") == 0) {
            amount = Legarda_to_Santolan;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Marikina") == 0) {
            amount = Legarda_to_Marikina;
        }

        else if (strcmp(station, "Legarda") == 00 && strcmp(endStation, "Antipolo") == 0) {
            amount = Legarda_to_Antipolo;
        }

        // Pureza up to Antipolo - Single Journey Fare Matrix
        else if (strcmp(station, "Pureza") == 00 && strcmp(endStation, "Recto") == 0) {
            amount = Pureza_to_Recto;
        }

        else if (strcmp(station, "Pureza") == 00 && strcmp(endStation, "Legarda") == 0) {
            amount = Pureza_to_Legarda;
        }
    
        else {
            printf("Invalid station.\n");
        }

        printf("Your fare from %s to %s is: %.2f", station, endStation, amount);

        return 0;


}