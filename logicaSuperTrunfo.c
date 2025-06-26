#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   //Variaáveis da pimeira carta.
   char pais1[50] = "a";
   int populacao1 = 120000;
   int pontosTuri1 = 20;
   float area1 = 435000;
   float pib1 = 1000000;
   float densi1 = populacao1/area1;

   //Variáveis da segunda carta.
   char pais2[50] = "b";
   int populacao2 = 250000;
   int pontosTuri2 = 35;
   float area2 = 535000;
   float pib2 = 1020000;
   float densi2 = populacao2/area2;

   //Declaração das variáveis que armazenam as opções que o usúario seleciona.
   int opcao1, opcao2;

    //Apresentação do jogo e leitura do nome do primeiro pais.
    printf("Bem-Vindo ao Super Trunfo! Digite o nome do primeiro pais:\n");
    fgets(pais1, 30, stdin);
    pais1[strcspn(pais1, "\n")] = 0;

    //Leitura da população.
    printf("Digite o tamanho da populacao:\n");
    scanf(" %d", &populacao1);

    //Leitura dos pontos turisticos.
    printf("Digite quantos pontos turisticos tem na cidade:\n");
    scanf(" %d", &pontosTuri1);

    //Leitura da área da cidade.
    printf("Digite quanto de area pertence a cidade:\n");
    scanf(" %f", &area1);

    //Leitura do pib da cidade.
    printf("Digite o pib da cidade:\n");
    scanf(" %f", &pib1);
    print("\n");

    //Leitura da segunda carta.
    getchar();
    printf("Digite o nome do segundo pais:\n");
    fgets(pais2, 30, stdin);
    pais2[strcspn(pais2, "\n")] = 0;

    printf("Digite o tamanho da populacao:\n");
    scanf(" %d", &populacao2);

    printf("Digite quantos pontos turisticos tem na cidade:\n");
    scanf(" %d", &pontosTuri2);

    printf("Digite quanto de area pertence a cidade:\n");
    scanf(" %f", &area2);

    printf("Digite o pib da cidade:\n");
    scanf(" %f", &pib2);
    printf("\n");


   //Seleção de atributo.
   printf("Selecione o primeiro atributo que deseja comparar: \n\n");
   printf("1 - Populacao\n");
   printf("2 - Area\n");
   printf("3 - PIB\n");
   printf("4 - Pontos Turisticos\n");
   printf("5 - Densidade Demografica\n");
   scanf(" %d", &opcao1);
   printf("\n");
   printf("Agora o segundo atributo: \n");

   //Menu dinâmico
   switch(opcao1){

    case 1:
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        scanf(" %d", &opcao2);
        printf("\n");

        if(opcao2 == opcao1){
            printf("Atributo ja selecionado, tente novamente.\n");
            exit(1);

        }
        break;

    case 2:
        printf("1 - Populacao\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        scanf(" %d", &opcao2);
        printf("\n");

        if(opcao2 == opcao1){
            printf("Atributo ja selecionado, tente novamente.\n");
            exit(1);

        }
        break;

    case 3:
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        scanf(" %d", &opcao2);
        printf("\n");

        if(opcao2 == opcao1){
            printf("Atributo ja selecionado, tente novamente.\n");
            exit(1);

        }
        break;

    case 4:
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("5 - Densidade Demografica\n");
        scanf(" %d", &opcao2);
        printf("\n");

        if(opcao2 == opcao1){
            printf("Atributo ja selecionado, tente novamente.\n");
            exit(1);

        }
        break;

    case 5:
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        scanf(" %d", &opcao2);
        printf("\n");

        if(opcao2 == opcao1){
            printf("Atributo ja selecionado, tente novamente.\n");
            exit(1);

        }
        break;

   }


   //Resultado do primeiro atributo.
   switch(opcao1){
    case 1:
        //Apresentação das cartas.
        printf("Populacao: \n");
        printf("%s: %d\n", pais1, populacao1);
        printf("%s: %d\n\n", pais2, populacao2);

        //Comparação para determinar o vencedor.
        if(populacao1 > populacao2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(populacao1 == populacao2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 2:
        printf("Area: \n");
        printf("%s: %.2f\n", pais1, area1);
        printf("%s: %.2f\n\n", pais2, area2);

        if(area1 > area2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(area1 == area2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 3:
        printf("PIB: \n");
        printf("%s: %.2f\n", pais1, pib1);
        printf("%s: %.2f\n\n", pais2, pib2);

        if(pib1 > pib2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(pib1 == pib2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 4:
        printf("Pontos Turisticos: \n");
        printf("%s: %d\n", pais1, pontosTuri1);
        printf("%s: %d\n\n", pais2, pontosTuri2);

        if(pontosTuri1 > pontosTuri2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(pontosTuri1 == pontosTuri2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 5:
        printf("Densidade Demografica: \n");
        printf("%s: %.2f\n", pais1, densi1);
        printf("%s: %.2f\n\n", pais2, densi2);

        if(densi1 < densi2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(densi1 == densi2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    default:
        printf("Opcao invalida, tente novamente.\n");
        exit(1);

   }


   //Resultado do segundo atributo.
   switch(opcao2){
    case 1:
        //Apresentação das cartas.
        printf("Populacao: \n");
        printf("%s: %d\n", pais1, populacao1);
        printf("%s: %d\n\n", pais2, populacao2);

        //Comparação para determinar o vencedor.
        if(populacao1 > populacao2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(populacao1 == populacao2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 2:
        printf("Area: \n");
        printf("%s: %.2f\n", pais1, area1);
        printf("%s: %.2f\n\n", pais2, area2);

        if(area1 > area2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(area1 == area2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 3:
        printf("PIB: \n");
        printf("%s: %.2f\n", pais1, pib1);
        printf("%s: %.2f\n\n", pais2, pib2);

        if(pib1 > pib2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(pib1 == pib2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 4:
        printf("Pontos Turisticos: \n");
        printf("%s: %d\n", pais1, pontosTuri1);
        printf("%s: %d\n\n", pais2, pontosTuri2);

        if(pontosTuri1 > pontosTuri2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(pontosTuri1 == pontosTuri2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    case 5:
        printf("Densidade Demografica: \n");
        printf("%s: %.2f\n", pais1, densi1);
        printf("%s: %.2f\n\n", pais2, densi2);

        if(densi1 < densi2){
            printf("O pais %s venceu!\n\n", pais1);

        } else if(densi1 == densi2){
            printf("Foi um empate!\n\n");

        } else{
            printf("O pais %s venceu!\n\n", pais2);

        }
        break;
    default:
        printf("Opcao invalida, tente novamente.\n");
        exit(1);

   }

    return 0;
}
