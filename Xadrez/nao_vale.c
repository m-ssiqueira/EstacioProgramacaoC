#include <stdio.h>

void mover_torre (int casas, char posX, int posY){
    if (casas > 0 ){
        posY = posY + 1; // Atualiza a posição
        printf("Torre em %c%d\n", posX, posY);
        mover_torre (casas - 1, posX, posY);
    }
}

int main(){
    int opcao, move, posY;
    char posX;
    
    do {
        printf("Movimente as Peças.\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("5 - sair do jogo\n");
        printf("escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                posY = 1;
                posX = 'a';
                printf("Quantas casas deseja andar com a TORRE? ");
                scanf("%d", &move);
                mover_torre(move, posX, posY);
                break; // Importante!
                
            case 5:
                printf("Saindo...\n");
                break;
        }
        
    } while (opcao != 5); // Condição de parada
    
    return 0;
}