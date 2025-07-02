#include <stdio.h>

int main(){

    int matriz [3][3];

    for (int i = 0; i < 3; i++){ // linha
        for (int j = 0; j < 3; j++){ // coluna
            matriz[i][j] = i + j; // nao entendi essa linha
            printf("mastriz[%d][%d] = %d\n", i,j,matriz[i][j]);
        }
    }
    return 0;
}