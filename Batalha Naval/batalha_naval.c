/*#include <stdio.h>

int main(){

int tabuleiro [10][10] = {              // inicializando a variavel manualmente.
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
};
for (int i = 0 ; i < 10; i++){
    for(int j = 0 ; j < 10 ; j++){
        printf("%d", tabuleiro[i][j]);
    }
    printf("\n");
}



    return 0;
}
*/

#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    
    for (int i = 0; i < 10 ; i++){              
        for (int j = 0; j < 10 ; j++){
// preenchendo o tabuleiro com 0
            tabuleiro[i][j] = 0;            
        }
            
    }
// peça 1
            tabuleiro[3][3] = 3;
            tabuleiro[3][4] = 3;
            tabuleiro[3][5] = 3;
// peça 2
            tabuleiro[5][7] = 3;
            tabuleiro[6][7] = 3;
            tabuleiro[7][7] = 3;
    
// imprimindo o tabuleiro
    for (int i = 0; i < 10 ; i++){              
        for (int j = 0; j < 10 ; j++){
            printf("%3d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}