#include <stdio.h>

void recursividade (int numero){
    if (numero > 0){
        printf("%d\n", numero);

        recursividade(numero - 1);
    }
}

int main (){

    int quantidade = 10; // tem que ser do mesmo tipo do outra parte

    printf("Contagem regressiva.\n");
    recursividade(quantidade);


    return 0;
}