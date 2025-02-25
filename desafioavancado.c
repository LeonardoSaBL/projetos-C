#include <stdio.h>

int main(){
    char estado1, estado2, codigo1, codigo2,cidade1, cidade2; 
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("  \n **** Dados da Primeira Carta **** \n");

    printf("Entre com o nome do estado: \n  ");
    scanf("%s", &estado1);

    printf("Entre com o codigo da cidade:  \n  ");
    scanf("%s", &codigo1);

    printf("Entre com o nome da cidade:   \n  ");
    scanf("%s", &cidade1);

    printf("Entre com o tamanho da população:    \n");
    scanf("%d", &pop1);

    printf("Entre com o tamanho da area da cidade:  \n ");
    scanf("%f",&area1);

    printf("Entre com o PIb da cidade: \n ");
    scanf("%f",&pib1);

    printf("Entre com o numero de pontos turisticos da cidade: \n ");
    scanf("%d",&pontos1);

    printf(" O Estado é: %s %s\n", estado1, codigo1);
    printf(" A cidade é: %s\n", cidade1);
    printf("A população é: %d\n", pop1);
    printf(" A aréa é: %f\n", area1);
    printf(" O PIB é: %f\n", pib1);
    printf("A quantidade de pontos turisticos é: %d\n", pontos1);
    printf("Carta 2: \n");
    

    printf(" **** Dados da segunda Carta **** \n");

    printf("Entre com o nome do estado: ");
    scanf("%s", &estado2);

    printf("Entre com o codigo da cidade: ");
    scanf("%s", &codigo2);

    printf("Entre com o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Entre com o tamanho da população: ");
    scanf("%d", &pop2);

    printf("Entre com o tamanho da area da cidade: ");
    scanf("%f",&area2);

    printf("Entre com o PIb da cidade: ");
    scanf("%f",&pib2);

    printf("Entre com o numero de pontos turisticos da cidade: ");
    scanf("%d",&pontos2);

    printf(" O Estado é: %s %s \n", estado2, codigo2);
    printf(" A cidade é: %s\n", cidade2);
    printf("A população é: %d\n", pop2);
    printf(" A aréa é: %f\n", area2);
    printf(" O PIB é: %f\n", pib2);
    printf("A quantidade de pontos turisticos é: %d\n", pontos2);


    




    




return 0;

    }