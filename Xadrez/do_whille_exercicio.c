/*
#include <stdio.h>

int main (){

    int  i=1;

    do{
        printf("%d\n", i);
        i++;


    }while (i<=5);

}
*/

#include <stdio.h>
int main(){

    char opcao;

    do {

        printf("C - cadastro do personagem\n");
        printf("J - Começar o jogo\n");
        printf("S - Sair\n");
        printf("Escolha :");
        scanf(" %c", &opcao);

        switch (opcao)
        {
        case 'C':
        case 'c':
            printf("Em breve, Cadastro de personagem.\n");
            break;
        case 'J':
        case 'j':
            printf("Em breve, Começando o jogo.\n");
            break;        
        case 'S':
        case 's':
            printf("Saindo ...\n");
            break;
        default :
            printf("Opção invalida\n");
        
        }
    }while (opcao != 's');
    printf("Obrigado por jogar\n");
    
}