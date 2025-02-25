#include <stdio.h>

int main(){
    char estado1 [30], estado2 [30], codigo1 [30], codigo2 [30],cidade1 [30], cidade2 [30]; 
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("  \n **** Dados da Primeira Carta **** \n");

    printf("Entre com o nome do estado: \n");
    scanf("%s", &estado1);

    printf("Entre com o codigo da cidade: \n");
    scanf("%s", &codigo1);

    printf("Entre com o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Entre com o tamanho da população: \n");
    scanf("%d", &pop1);

    printf("Entre com o tamanho da area da cidade: \n");
    scanf("%f", &area1);

    printf("Entre com o PIb da cidade: \n");
    scanf("%f", &pib1);

    printf("Entre com o numero de pontos turisticos da cidade: \n");
    scanf("%d",&pontos1);
   
    printf("*****Dados da Segunda Carta \n");

    printf("Entre com o nome do estado: \n");
    scanf("%s", &estado2);

    printf("Entre com o codigo da cidade: \n");
    scanf("%s", &codigo2);

    printf("Entre com o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Entre com o tamanho da população: \n");
    scanf("%d", &pop2);

    printf("Entre com o tamanho da area da cidade: \n");
    scanf("%f",&area2);

    printf("Entre com o PIb da cidade: \n");
    scanf("%f",&pib2);

    printf("Entre com o numero de pontos turisticos da cidade: \n");
    scanf("%d",&pontos2);


    printf("Os dados da primeira carta são: \n");
    printf(" O Estado é: %s \n", estado1);
    printf(" O Codigo é: %s \n", codigo1);
    printf(" A cidade é: %s \n", cidade1);
    printf(" A população é: %d \n", pop1);
    printf(" A aréa é: %f \n", area1);
    printf(" O PIB é: %f \n", pib1);
    printf(" A quantidade de pontos turisticos é: %d \n", pontos1);


    printf("Os dados da Segunda carta são:  \n");
    printf(" O Estado é: %s \n", estado2);
    printf(" O Codigo é: %s \n", codigo2);
    printf(" A cidade é: %s  \n", cidade2);
    printf(" A população é: %d  \n", pop2);
    printf(" A aréa é: %f \n", area2);
    printf(" O PIB é: %f \n", pib2);
    printf(" A quantidade de pontos turisticos é: %d  \n", pontos2);
    
    
    return 0;

    }
