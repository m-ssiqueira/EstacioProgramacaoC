/*

#include <stdio.h>

int main (){

    int idade = 20;

    idade >= 18 ? printf("Maior de idade.\n") : printf("De menor.\n");

return 0;
}

*/


/*
#include <stdio.h>

int main(){

    int temperatura = 20, resultado;


    resultado = temperatura > 30 ? 1 : 0;
    if (resultado == 1){
        printf("Está calor \n");
    } else {
        printf("Está frio\n");
    }

    return 0;
}
*/


#include <stdio.h>

int main(){

    int num1 = 50; 
    int num2 = 20; 
    int resultado;

    num1 > num2 ? (resultado = num1) : (resultado = num2);

    printf("O maior número é %d\n", resultado);


}
