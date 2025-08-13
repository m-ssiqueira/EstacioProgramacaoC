#include <stdio.h>

// #define ajuda a definir CONSTANTES
#define LINHAS 5  
#define COLUNAS 5

int main(){

    int matriz [LINHAS][COLUNAS];
    int target = 24;
    int found = 0;
    int soma = 1;
    

    for (int i = 0; i < LINHAS ; i++){
        for (int j = 0; j < COLUNAS ; j++){
            
            matriz[i][j] = soma;
            soma++;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < LINHAS ; i++){
        for(int j = 0 ; j < COLUNAS ; j++){
            if (matriz[i][j] == target) {
                printf("O número %d foi encontrado em linha %d,coluna %d", target, i+1,j+1);
                found = 1;
                break;
            }
        }

    }
    
    return 0;
}