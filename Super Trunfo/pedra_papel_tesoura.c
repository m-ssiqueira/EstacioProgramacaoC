#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolha_player, escolha_cpu;
    srand(time(0));

    printf(" *** Jogo de Jokenpô ***\n");
    printf("Escolha as opções:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Escolha : ");
    scanf("%d", &escolha_player);

    escolha_cpu = rand() % 3 +1;

    switch (escolha_player){
        case 1:
            printf("O Você Escolheu Pedra\n");
            break;
        case 2:
            printf("O Você escolheu Papel\n");
            break;
        case 3:
            printf("O Você escolheu Tesoura\n");
            break;
    default:
        printf("Opção Inválida\n");
    }

    switch (escolha_cpu){
        case 1:
            printf("O Computador Escolheu Pedra\n");
            break;
        case 2:
            printf("O Computador escolheu Papel\n");
            break;
        case 3:
            printf("O Computador escolheu Tesoura\n");
    }

        if(escolha_player == escolha_cpu){
            printf(" *** EMPATE ***\n");
        }else if((escolha_player == 1) && (escolha_cpu == 3) ||
                (escolha_player == 2) && (escolha_cpu == 1) ||
                (escolha_player == 3) && (escolha_cpu == 2))
                {
                    printf(" *** VOCÊ VENCEU *** \n");
                }else {
                    printf(" *** VOCÊ PERDEU ***\n");
                }



/*
se 1 com 1 = empate
se 1 com 2 = 2
se 1 com 3 = 1
se 2 com 2 = empate
se 2 com 3 = 3
se 3 com 3 = empate

*/

return 0;
}