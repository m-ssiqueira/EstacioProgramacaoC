// exercicio de decisoes encadeadas. 

/* EXERCICIO 1
#include <stdio.h>
    int main(){

        int idade;

        printf("Digite sua idade :");
        scanf("%d", &idade);

        if(idade >= 60){
            printf("Você é um idoso !\n");
        }else if(idade < 60 && idade>=18){
            printf("Você é um adulto !\n");
        }else if(idade < 18 && idade >=12){
            printf("Você é um adolecente !\n");
        }else {
            printf("Você é uma criança !\n");
        }
        return 0;
    }
*/

// EXERCICIO 2

#include <stdio.h>
    int main(){

        int nota;
        
        printf("Digite sua nota: ");
        scanf("%d", &nota);

        if (nota<60){
            printf("Conceito F \n");
        }else if(nota<70){
            printf("Conceito D \n");
        }else if(nota<80){
            printf("Conceito C\n");
        }else if(nota<90){
            printf("Conceito B\n");
        }else{
            printf("Conceito A \n");
        }

        return 0;
    }