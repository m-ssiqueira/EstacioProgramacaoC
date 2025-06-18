/*

&& - AND , O "E" lógico
|| - OR, O "Ou" lógico
! - NOT, o "Não" lógico

&& - a condição AND só vai ser verdadeira se os valores de A e B (A && B) forem verdadeiros
|| - vai retornar verdadeiro se a condições de A OU B (A || B) forem verdadeiros
! - ele inverte o valor logico da variavel, se A for verdadeiro !A vai imprimir falso e vice versa

*/

/*
AND
#include <stdio.h>

    int main(){

        int a=10, b=-5;

        if (a>0 && b>0){
            printf("Os dois numeros são positivos\n");
        }else {
            printf("Pelo menos um numero é positivo\n");
        }
}
*/

/*
OR
#include <stdio.h>

    int main(){

        int a=-10, b=5;

        if (a>0 || b>0){
            printf("Pelo menos um numero é positivo\n");
        }else {
            printf("Os dois numeros são negativos\n");
        }
}
*/
/* NOT
#include <stdio.h>

    int main(){

        int a=20;

        if (!(a>0)){
            printf("O numero é negativo\n");
        }else {
            printf("O Numeiro é positivo\n");
        }
}
*/

#include <stdio.h>

    int main(){
        int idade;
        float altura;

        idade = 20;
        altura = 1.96;

        if(idade>=18 && idade<=30 || altura>=1.60 && altura<=1.90){
            printf("Voce esta apto a andar no brinquedo\n");
        }else{
            printf("Voce foi barrado\n");
        }
    }
