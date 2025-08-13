/*  --== CONE ==--
#include <stdio.h>

#define linha  5
#define coluna  11

int main(){

    int matriz[linha][coluna];

    for(int i = 0; i < linha ; i++){
        for(int j = 0; j < coluna ; j++){
            if (j >= (coluna/2 - i) && j <= (coluna/2 +i) ) {
                 matriz[i][j] = 2;
            } else{
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            printf("%d", matriz[i][j]);
            
        }
        printf("\n");
    }

}
*/

/*
#include <stdio.h>

#define linha  3
#define coluna  5

int main(){

    int matriz[linha][coluna];

    for(int i = 0; i < linha ; i++){
        for(int j = 0; j < coluna ; j++){
            if (i == (linha/2) || j == (coluna/2) ) {
                matriz[i][j] = 2;
           } else{
                matriz[i][j] = 0;
           }
            
        }
    }

    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            printf("%d", matriz[i][j]);
            
        }
        printf("\n");
    }

}
    */

#include <stdio.h>

int main() {
    int linha = 7;
    int coluna = 9;
    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if ((i <= j && j == (coluna/2)) ||           // topo
                (i == (linha/2) && (j > 0 && (j+1) < coluna)) || // linha do meio- && (j >= 1 && j <= 3)
                (i >= j && j == (coluna/2))) {           // base
                matriz[i][j] = 3;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    // imprime
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

