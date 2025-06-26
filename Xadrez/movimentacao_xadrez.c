#include <stdio.h>

//movimento da TORRE - CIMA
void mover_torre (int casas, char posX, int posY){
    if (casas > 0 ){
        printf("Frente %c%d\n", posX, ++posY);
        mover_torre (casas -1, posX, posY);
    }
}
//movimento do BISPO - DIREITA FRENTE
void mover_bispo (int casas, char posX, int posY){
    if (casas > 0){
        printf("Direita, Frente, %c,%d.\n", ++posX, ++posY);
        mover_bispo(casas -1, posX, posY);
    }
}
// movimento da RAINHA - ESQUERDA
void mover_rainha (int casas, char posX, int posY){
    if (casas > 0){
        printf("Esquerda, %c,%d.\n", --posX, posY);
        mover_rainha(casas -1, posX, posY);
    }
}
// movimento do CAVALO - CIMA CIMA DIREITA
void mover_cavalo (int casas, char posX, int posY){
    if (casas >0 ){
        for (int i=0;i < 2; i++){
            printf("Cima, %c,%d.\n", posX, ++posY);
        }
        printf("Direita %c,%d.\n", ++posX, posY);
        mover_cavalo (casas -1, posX, posY);
    }
                                
    
}

int main(){


    int opcao, move, posY;
    char posX;
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
        printf("4 - Cavalo\n");
        printf("5 - sair do jogo\n");
        printf("escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                // considerando a torre começando na posição a,1 e ela podendo mover apenas pra frente.                        
                posY = 1;
                posX = 'a';
                printf("Quantas casas deseja andar com a TORRE ?");
                scanf("%d", &move);
                if (move<8){
                    /* 
                        for (int i=0;i < move; i++){
                            printf("Frente , %c,%d.\n", posX, ++posY);}
                    */
                    mover_torre(move, posX, posY);
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
                    /*   
                        for (int i=0;i < move; i++){
                            printf("Frente, Direita, %c,%d.\n", ++posX, ++posY);}
                    */
                    mover_bispo (move,posX,posY);
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
                      /* 
                       for (int i=0;i < move; i++){
                            printf("Esquerda, %c,%d.\n", --posX, posY);}
                      */
                    mover_rainha (move, posX, posY);  
                    }else {
                        printf("Opção invalida.\n");
                    }
                break;

                case 4:
                // considerando o cavalo começando na posição a,1 e ele podendo mover apenas duas vezes pra cima e uma vez pra direita  fazendo um L                  
                posY = 1;
                posX = 'a';
                printf("Quantas casas deseja andar com O Cavalo ?");
                scanf("%d", &move);
                    if (move<8){    
                        /*
                        int cavalo = move;
                        while (cavalo--){
                            for (int i=0;i < 2; i++){
                                printf("Cima, %c,%d.\n", posX, ++posY);
                            }
                            printf("Direita %c,%d.\n", ++posX, posY);}
                        */    
                        mover_cavalo(move, posX, posY);
                    }else {
                        printf("Opção invalida.\n");
                    }
                break;

            case 5:
                printf("Saindo do jogo.\n");
                break;
            default :    
            printf("Opção invalida\n");
        }
    }while (opcao != 5);
    
        printf("Obrigado por jogar.\n");
    
    

    return 0;
    
}