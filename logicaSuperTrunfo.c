#include <stdio.h>


int main() {

   //Variaáveis da pimeira carta.
   char codigo1[4] = "01";
   char pais1[50] = "a";
   int populacao1 = 120000;
   int pontosTuri1 = 20;
   float area1 = 435000;
   float pib1 = 1000000;
   float densi1 = populacao1/area1;
   float capita1 = pib1/populacao1;

   //Variáveis da segunda carta.
   char codigo2[4] = "01";
   char pais2[50] = "b";
   int populacao2 = 250000;
   int pontosTuri2 = 35;
   float area2 = 535000;
   float pib2 = 1020000;
   float densi2 = populacao2/area2;
   float capita2 = pib2/populacao2;

   //Declaração da variável que armazena a opção que o usúario seleciona.
   int opcao;

   //Apresentação do jogo e seleção de atributo.
   printf("Bem-Vindo ao Super Trunfo! Selecione o atributo que deseja comparar: \n\n");
   printf("1 - Populacao\n");
   printf("2 - Area\n");
   printf("3 - PIB\n");
   printf("4 - Pontos Turisticos\n");
   printf("5 - Densidade Demografica\n");
   scanf(" %d", &opcao);
   printf("\n");

   //Resultado das seleções.
   switch(opcao){
    case 1:
        //Apresentação das cartas.
        printf("Populacao: \n");
        printf("%s: %d\n", pais1, populacao1);
        printf("%s: %d\n\n", pais2, populacao2);

        //Comparação para determinar o vencedor.
        if(populacao1 > populacao2){
            printf("O pais %s venceu!\n", pais1);
        } else if(populacao1 == populacao2){
            printf("Foi um empate!\n");
        } else{
            printf("O pais %s venceu!\n", pais2);
        }
        break;
    case 2:
        printf("Area: \n");
        printf("%s: %.2f\n", pais1, area1);
        printf("%s: %.2f\n\n", pais2, area2);

        if(area1 > area2){
            printf("O pais %s venceu!\n", pais1);
        } else if(area1 == area2){
            printf("Foi um empate!\n");
        } else{
            printf("O pais %s venceu!\n", pais2);
        }
        break;
    case 3:
        printf("PIB: \n");
        printf("%s: %.2f\n", pais1, pib1);
        printf("%s: %.2f\n\n", pais2, pib2);

        if(pib1 > pib2){
            printf("O pais %s venceu!\n", pais1);
        } else if(pib1 == pib2){
            printf("Foi um empate\n!");
        } else{
            printf("O pais %s venceu!\n", pais2);
        }
        break;
    case 4:
        printf("Pontos Turisticos: \n");
        printf("%s: %d\n", pais1, pontosTuri1);
        printf("%s: %d\n\n", pais2, pontosTuri2);

        if(pontosTuri1 > pontosTuri2){
            printf("O pais %s venceu!\n", pais1);
        } else if(pontosTuri1 == pontosTuri2){
            printf("Foi um empate!\n");
        } else{
            printf("O pais %s venceu!\n", pais2);
        }
        break;
    case 5:
        printf("Densidade Demografica: \n");
        printf("%s: %.2f\n", pais1, densi1);
        printf("%s: %.2f\n\n", pais2, densi2);

            printf("O pais %s venceu!\n", pais1);
        } else if(densi1 == densi2){
            printf("Foi um empate!\n");
        } else{
            printf("O pais %s venceu!\n", pais2);
        }
    default:
        printf("Opcao invalida, tente novamente.");
   }

    return 0;
}
