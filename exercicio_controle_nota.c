#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudante\n");
    printf("1 - Calcule a Média\n");
    printf("2 - Status do aluno.\n");
    printf("3 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);


    switch (opcao){
        
        case 1:
            printf("Calcular a media\n");
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            if ((nota1 >= 0) && (nota1 <= 10) && (nota2 >= 0) && (nota2 <= 10)){
                media = (nota1+nota2)/2;
                printf("a média do aluno é de %.1f\n", media);
            }else {
                printf("Entrada com valores errados.\n");
            }
            break;

        case 2:
            printf("Status do aluno:\n");
            printf("Entre com a média do aluno: ");
            scanf("%f", &media);
 // media >= 6 ? printf("Aluno aprovado!\n") : printf ("Aluno Reprovado\n");
            if (media <=10 && media >= 7){
                printf("Aluno Aprovado !\n");
            }else if (media<=6 && media >= 5){
                printf("Aluno em recuperação !\n");
            }else if(media>=0 && media<=4){
                printf ("Aluno Reprovado !\n");
            }else {
                printf("Opção Inválida\n");
            }
            break;


        
        case 3:
            printf("Sair do programa\n");
            break;

    default:
        printf("Opção inválida\n");
    }

return 0;

}