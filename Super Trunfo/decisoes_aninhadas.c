// vamos verificar se a pessoa pode receber o beneficio
// vamos testar  se IDADE entre 18-65, RENDA < 2000, DEPENDENTES > 2
// depois vamos pedir um numero e testar se ele é positivo, negativo ou 0. se for positivo, dizer se é par ou impar


#include <stdio.h>
    int main(){
        int idade, numero, dependentes;
        float renda;
    
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua renda: ");
        scanf("%f", &renda);
        printf("Digite o numero de dependentes: ");
        scanf("%d", &dependentes);
        printf("Digite seu número: ");
        scanf("%d", &numero);


    if (idade>=18 && idade<=65){
        if(renda<2000){
            if (dependentes>2){
                printf("Parabéns! Vocè tem direito ao beneficio !\n");
                }else{
                printf("Você não tem direitos por motivo de DEPENDENTES\n");
            }
        }else{
            printf("Você não tem direitos por motivo de RENDA\n");
        }
    }else {
        printf("Você não tem direitos por motivo de IDADE\n");
    }
   
    if (numero>0){
        if(numero %2 == 0){
            printf("Seu número positivo é PAR\n");
        }else{
            printf("Seu número positivo é IMPAR\n");
        }
    }else if(numero == 0){
        printf("Seu número é ZERO !\n");
    }else{
        printf("Seu número é negativo\n");
    }

return 0;
}