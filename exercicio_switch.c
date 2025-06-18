// exercicio sobre a função switch substituindo o IF ELSE 
/*
switch (variavel) // pode por variavel ou alguma outra condição.
    case :  // no case a gente bota a opcao
    break; // pra parar 
default:   // volta pra se nenhuma das condicoes forem verdadeiras
*/

#include <stdio.h>
    int main(){
        
        int dia;
        
        printf("Digite de 1 a 7 para os dias da semana: ");
        scanf("%d", &dia);

        switch(dia){
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-Feira\n");
                break;
            case 3:
                printf("Terça-Feira\n");
                break;
            case 4:
                printf("Quarta-Feira\n");
                break;
            case 5:
                printf("Quinta-Feira\n");
                break;
            case 6:
                printf("Sexta-Feira\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            default:
                printf("Opção Invalida\n");
        }

        return 0;
    }