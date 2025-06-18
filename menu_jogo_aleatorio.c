#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao;
    int numero_secreto, palpite;

    printf("Menu Principal\n");
    printf("1 - Iniciar o Jogo\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
        // codigo
            srand(time(0));
            numero_secreto = rand() % 10;
            printf("Digite um número de 0 a 9:");
            scanf("%d", &palpite);
            
            printf("Numero Secreto = %d\n", numero_secreto);
            if(numero_secreto == palpite){
                printf("Você acertou!\n");
            }else {
                printf("Você errou.\n");
            }

            break;
        case 2:
            printf("Regras:\n");
            printf("Digite um numero e se divirta.\n");
            break;
        case 3:
            printf("FIM\n");
            break;
    default:
            printf("Opção Invalida\n");
            break;
        
    
    }  

    return 0;
}