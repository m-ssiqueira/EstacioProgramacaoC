#include <stdio.h>

    main(){

        int numero;
        numero = 4;
// o % é um operador matematico que representa o resto de uma operação. no caso , dividindo o numero por 2 da 0 pra numeros pares e 1 para numeros impares
if (numero % 2 == 0){
        printf ("o numero é par\n");
}else {
    printf("o numero é impar\n");
}
return 0;

}

// o IF abre parentese mas nao bota o ponto e virgula, abre conchetes