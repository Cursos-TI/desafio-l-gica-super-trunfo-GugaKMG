#include <stdio.h>


int main() {

   //Variaáveis da pimeira carta.
   char estado1[20] = "Sao Paulo";
   char codigo1[4] = "S01";
   char cidade1[50] = "Sao Paulo";
   int populacao1 = 120000;
   int pontosTuri1 = 20;
   float area1 = 435000;
   float pib1 = 1000000;
   float densi1 = populacao1/area1;
   float capita1 = pib1/populacao1;

   //Variáveis da segunda carta.
   char estado2[20] = "Rio de Janeiro";
   char codigo2[4] = "R01";
   char cidade2[50] = "Rio de Janeiro";
   int populacao2 = 250000;
   int pontosTuri2 = 35;
   float area2 = 335000;
   float pib2 = 1020000;
   float densi2 = populacao2/area2;
   float capita2 = pib2/populacao2;

   //Apresentação das cartas.
   printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1,area1);
   printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, area2);

   //Comparação para determinar a carta vencedora.
   if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
   } else{
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
   }

    return 0;
}
