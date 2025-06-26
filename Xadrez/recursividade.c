#include <stdio.h>

void recursividade (int numero){
    if (numero > 0){

                recursividade(numero - 1);
        printf("%d\n", numero);  // nesse exemplo mostra que se eu mudar as linhas de lugar o resultado é diferente.

    }
}

int main (){

    int quantidade = 10; // tem que ser do mesmo tipo do outra parte

    printf("Contagem regressiva.\n");
    recursividade(quantidade);


    return 0;
}