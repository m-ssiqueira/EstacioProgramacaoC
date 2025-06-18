#include <stdio.h>
    int main(){

        float temperatura, umidade;
        unsigned int estoque, estoque_min = 100;

        printf("Digite o numero de peças: ");
        scanf("%u", &estoque);

        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);

        printf("Digite a umidade: ");
        scanf("%f", &umidade);


        if(temperatura > 30){
            printf("Temperatura alta !\n");
        }else {
            printf("Temperatura dentro dos parametros.\n");
        }

        if (umidade > 50) {
            printf("Umidade critica! \n");
        } else{
            printf("Umidade dentro dos parametros.\n");
        }

        if (estoque < estoque_min){
            printf("Estoque esvaziando\n");
        }else{
            printf("Estoque OK\n");
        }

        return 0;
    }