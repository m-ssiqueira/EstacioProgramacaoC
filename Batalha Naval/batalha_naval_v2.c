
#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    
    for (int i = 0; i < 10 ; i++){              
        for (int j = 0; j < 10 ; j++){
// preenchendo o tabuleiro com 0
            tabuleiro[i][j] = 0;            
        }
            
    }

/*
int posI01, posJ01;
digite a posicao inicial da peça  01 vertical: 
scanf %d%d , posI, posJ;

*/
// peça horizontal

        for (int i=0; i<3;i++){
            tabuleiro[5][4+i] = 3;
        }

    
// peça vertical
 
        for (int i=0; i<3;i++){
            tabuleiro[1+i][4] = 3;
        }


// peça diagonal
        // de baixo pra cima, da equerda pra direita
        for (int i=0; i<3;i++){
            tabuleiro[9-i][0+i] = 3;
        }
        // de cima pra baixo, da direita pra esquerda
        for (int i=0; i<3;i++){
            tabuleiro[7+i][7-i] = 3;
        }


    // imprimindo o tabuleiro
    int linha = 1;
    char coluna;
        printf("X ");
    for(coluna = 'A'; coluna < 'K' ; coluna++){
        printf("  %c", coluna);
    }
    printf("\n");
    for (int i = 0; i < 10 ; i++){
        printf("%02d", linha++);
        for (int j = 0; j < 10 ; j++){
            
            printf("%3d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}