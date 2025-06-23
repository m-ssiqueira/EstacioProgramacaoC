
/*
#include <stdio.h>

int main(){
    int i=1;

    while (i<=10)
    {
        printf("%d\n", i);
        i++;
    }
    
    

    return 0;
}
    */

#include <stdio.h>

int main(){

    int num;
    
    printf("Digite um numero(0 para sair):");
    scanf("%d", &num); 
    
    while (num!=0)
    {
        printf("Você digitou %d\n", num);
        
        printf("Digite um numero(0 para sair):");
        scanf("%d", &num); 

    }
    printf("Obrigado por jogar.\n");
}