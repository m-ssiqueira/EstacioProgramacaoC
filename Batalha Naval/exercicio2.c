#include <stdio.h>

// #define ajuda a definir CONSTANTES
#define LINHAS 12  
#define COLUNAS 7

int main(){

    int matriz [LINHAS][COLUNAS];

    int soma = 0;

    for (int i = 0; i < LINHAS ; i++){
        for (int j = 0; j < COLUNAS ; j++){
            soma++;
            matriz[i][j] = soma;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}