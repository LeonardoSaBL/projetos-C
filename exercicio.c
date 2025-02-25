#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30) {
        printf("Temperatura esta alta\n");
        } else {
            printf("Temperatura está dentro dos paramentros.\n");
            }

    if (umidade > 50){
        printf("Umidade elevada\n");
        } else {
            printf("Umidade está normal\n");
            }
            if (estoque  estoqueminimo){
                printf("Estoque está baixo\n");
                } else {
                    printf("Estoque está normal\n");
                    }    
                    
                    }


        
    

