#include <stdio.h>

    int main(){
        /*
        Soma (+)
        Subtração (-)
        Multiplicação (*)
        Divisão (/)
        */

        int numero1, numero2;
        int soma, sub, mult, div;
        

        printf("Entre com o numero um:");
        scanf("%d", &numero1);

        printf("Entre com o numero dois:");
        scanf("%d", &numero2);

        // operação soma
        soma = numero1 + numero2;

        // operação subtração
        sub = numero1 - numero2;

        // operação multiplicação
        mult = numero1 * numero2;

        // operação divisão
        div = numero1 / numero2;

        printf("Soma = %d\n", soma);
        printf("Subtração = %d\n", sub);
        printf("Multiplicação = %d\n", mult);
        printf("Diviasão = %d\n", div);

        return 0;

    }