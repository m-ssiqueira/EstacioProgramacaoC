#include <stdio.h>

int main(){


    int opcao, move, posX;
    char posY;
    /*
    Menu Interativo;
    Escolhe a peça e danda com ela; 
    Não guarda a posiçao.
    */
    do {
        printf("Movimente as Peças.\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - sair do jogo\n");
        printf("escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                // considerando a torre começando na posição a,1 e ela podendo mover apenas pra frente.                        
                posY = 1;
                posX = 'a';
                printf("Quantas casas deseja andar com a TORRE ?");
                scanf("%d", &move);
                    if (move < 8){    
                        for (int i=0;i < move; i++){
                            printf("Frente , %c,%d.\n", ++posX, posY);
                        }
                    }else {
                        printf("Opção invalida.\n");
                    }

            break;
            case 2:
                // considerando a bispo começando na posição a,1 e ela podendo mover apenas pra frente/direita                      
                posY = 1;
                posX = 'a';
                printf("Quantas casas deseja andar com o Bispo ?");
                scanf("%d", &move);
                    if (move < 8){    
                        for (int i=0;i < move; i++){
                            printf("Frente, Direita, %c,%d.\n", ++posX, ++posY);
                        }
                    }else {
                        printf("Opção invalida.\n");
                    }
                break;
            case 3:
                // considerando a Rainha começando na posição h,1 e ela podendo mover apenas pra esquerda                     
                posY = 1;
                posX = 'h';
                printf("Quantas casas deseja andar com A Rainha ?");
                scanf("%d", &move);
                    if (move<8){    
                        for (int i=0;i < move; i++){
                            printf("Esquerda, %c,%d.\n", --posX, posY);
                        }
                    }else {
                        printf("Opção invalida.\n");
                    }
                break;
            case 4:
                printf("Saindo do jogo.\n");
                break;
            default :    
            printf("Opção invalida\n");
        }
    }while (opcao != 4);
    {
        printf("Obrigado por jogar.\n");
    }
    

    return 0;
    
}