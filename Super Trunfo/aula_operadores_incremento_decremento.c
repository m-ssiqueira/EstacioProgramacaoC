#include <stdio.h>
// os operadores de incremento e decremento podem ser pré ou pós. 
    int main(){

        int numero1 = 5, numero2 = 2;
        int resultado;

        printf(" --------------------------------- \n");
        printf("%d\n", resultado = numero1++);
        printf("%d\n", numero1);
        printf("%d\n", resultado = ++numero1);
        printf("%d\n", numero1);

        printf(" --------------------------------- \n");
        printf("%d\n", resultado = numero1--);
        printf("%d\n", numero1);
        printf("%d\n", resultado = --numero1);
        printf("%d\n", numero1);


    }