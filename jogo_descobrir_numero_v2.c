#include <stdio.h>
#include <stdlib.h>
#include <time.h>


    int main(){

        int num_jogador, num_cpu, resultado;
        char tipo;

        srand(time(0));
        num_cpu = rand() % 100 +1;

        printf("Bem Vindo ao jogo Maior, Menor ou Igual.\n");
        printf("Você deve escolher um tipo de comparação.\n");
        printf("M - Maior\n");
        printf("N - meNor\n");
        printf("I - Igual\n");

        printf("Digite sua escolha: ");
        scanf("%c", &tipo);
        printf("Digite um número de 1 - 100: ");
        scanf("%d", &num_jogador);

        printf("O número escolhido pelo computador foi o %d\n", num_cpu);

        switch (tipo){
            case 'M':
            case 'm':
                num_jogador > num_cpu ? printf("Parabéns, seu numero é o MAIOR.\n") : printf("Desculpe, mas seu número é o menor.\n");
                break;
            case 'N':
            case 'n':
                num_jogador < num_cpu ? printf("Parabéns, seu numero é o MENOR.\n") : printf("Desculpe, mas seu número é o maior.\n");
                break;
            case 'I':
            case 'i':
                num_jogador == num_cpu ? printf("Parabéns, seu número é IGUAL ao do computador.\n") : printf("Desculpe, mas seu número é diferente.\n");
                break;
            default:
                printf("Opção Invalida.\n");

        }
}