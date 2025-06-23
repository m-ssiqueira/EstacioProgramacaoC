/*
 - = WHILE = - imprime os números pares até 10
#include <stdio.h>

int main (){

    int i = 0;

    while (i <= 10)
    {
        if(i % 2 == 0){

            printf("O número é %d é par.\n", i);
        }        
        i++; // evitar loop infinito
    }
    

    return 0;
}
*/

/*
 - = DO WHILE = - Espera a entrada de um número PAR pra sair do programa
#include <stdio.h>

int main(){

    int num;

    do{
        printf("Digite um número par para sair do pregrama: ");
        scanf("%d", &num);
        if (num % 2 == 0){
            printf("%d é par!\n", num);
        }else {
            printf("%d é impar!\n", num);
        }
    } while (num % 2 != 0);
    {
    }
   
    return 0;
}
*/
// - = FOR = - tabuada
#include <stdio.h>

int main(){

    int num, i;

    printf("Digite o multiplicador: ");
    scanf("%d", &num);

    for(i=0; i <=10; i++){
        printf("%d x %d = %d\n", i, num, i*num);
    }
    return 0;
}