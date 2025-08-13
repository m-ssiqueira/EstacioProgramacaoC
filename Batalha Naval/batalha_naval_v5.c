#include <stdio.h>

int main(){

int opcao_menu, opcao_direcao, opcao_diagonal;
int frig = 3;
int tabuleiro[10][10];

// preenchendo o tabuleiro com 0   
    for (int i = 0; i < 10 ; i++){              
        for (int j = 0; j < 10 ; j++){
            tabuleiro[i][j] = 0;            
        }
            
    }

// iniciando o programa

do{

printf("Bem vindo ao jogo de Batalha naval\n");
printf("1 - Exibir Tabuleiro\n");
printf("2 - Posicionar Peça \n");
printf("3 - Sair do Jogo\n");
scanf("%d", &opcao_menu);

    switch (opcao_menu)
    {
    case 1:
        // imprimindo o tabuleiro
            int linha = 1;
            char coluna;
                printf("X ");
            for(coluna = 'A'; coluna < 'K' ; coluna++){
                printf("  %c", coluna);
            }
            printf("\n");
            for (int i = 0; i < 10 ; i++){
                printf("%02d", linha++);
                for (int j = 0; j < 10 ; j++){        
                    printf("%3d", tabuleiro[i][j]);
                }
                printf("\n");
            }
        break;

    case 2:
            
        do {
              //  int pos_hor, pos_vert, pos_dia;

            printf("Escolha a direção da peça:\n");
            printf("1 - Horizontal (para direita)\n");
            printf("2 - Vertical (pra baixo)\n");
            printf("3 - Diagonal (pra baixo pra esquerda)\n");
            printf("4 - Diagonal (pra baixo pra direita)\n");
            scanf("%d", &opcao_direcao);
                    
                switch (opcao_direcao)
                {
                    case 1:
                        // horizontal esqueda pra direita
                            char coluna_h;
                            int linha_h;
                            printf("Digite a posição inicial da proa do navio\n");
                            printf("(Coluna depois Linha ex: C04) :");
                            scanf(" %c%d", &coluna_h, &linha_h);

                            int colunah = coluna_h -'A';
                            int linhah = linha_h -1;
                            
                            int ocupadoh = 0;

                            if (colunah >= 0 && colunah <= 7 && linhah >= 0 && linhah <= 9){
                                
                                for (int i = 0; i < frig; i++){
                                    if(tabuleiro[linhah][colunah + i] != 0) {
                                        ocupadoh = 1;
                                        break;
                                    }
                                }

                                if (!ocupadoh){
                                    for (int i = 0; i < frig; i++) {
                                    tabuleiro[linhah][colunah+i] = 3;
                                    }

                                }else {
                                    printf("Opção Inválida\n");
                                }
                                
                            }else {
                                printf("Opção Invalida\n");
                            }
                    break;
                    case 2:
                        // vertical cima pra baixo
                            char coluna_v;
                            int linha_v;
                            printf("Digite a posição inicial da proa do navio\n");
                            printf("(Coluna depois Linha ex: C04) :");
                            scanf(" %c%d", &coluna_v, &linha_v);

                            int colunav = coluna_v -'A';
                            int linhav = linha_v -1;                     
                            int ocupadov = 0;

                            if (colunav >= 0 && colunav <= 9 && linhav >= 0 && linhav <= 7){
                                
                                for (int i = 0; i < frig; i++){
                                    if(tabuleiro[linhav + i][colunav] != 0) {
                                        ocupadov = 1;
                                        break;
                                    }
                                }

                                if (!ocupadov){
                                    for (int i = 0; i < frig; i++) {
                                    tabuleiro[linhav + i][colunav] = 3;
                                    }

                                }else {
                                    printf("Opção Inválida\n");
                                }
                                
                            }else {
                                printf("Opção Invalida\n");
                            }
                    break;
                    case 3:
                        // diagonal pra baixo pra esquerda
                            char coluna_de;
                            int linha_de;
                            printf("Digite a posição inicial da proa do navio\n");
                            printf("(Coluna depois Linha ex: C04) :");
                            scanf(" %c%d", &coluna_de, &linha_de);

                            int colunade = coluna_de -'A';
                            int linhade = linha_de -1;
                            
                            int ocupadode = 0;

                            if (colunade >= 2 && colunade <= 9 && linhade >= 0 && linhade <= 7){
                                
                                for (int i = 0; i < frig; i++){
                                    if(tabuleiro[linhade+i][colunade - i] != 0) {
                                        ocupadode = 1;
                                        break;
                                    }
                                }

                                if (!ocupadode){
                                    for (int i = 0; i < frig; i++) {
                                    tabuleiro[linhade+i][colunade-i] = 3;
                                    }

                                }else {
                                    printf("Opção Inválida\n");
                                }
                                
                            }else {
                                printf("Opção Invalida\n");
                            }
                    break;
                    case 4:
                        // diagonal pra baixo pra direita
                            char coluna_dd;
                            int linha_dd;
                            printf("Digite a posição inicial da proa do navio\n");
                            printf("(Coluna depois Linha ex: C04) :");
                            scanf(" %c%d", &coluna_dd, &linha_dd);

                            int colunadd = coluna_dd -'A';
                            int linhadd = linha_dd -1;
                            
                            int ocupadodd = 0;

                            if (colunadd >= 0 && colunadd <= 7 && linhadd >= 0 && linhadd <= 7){
                                
                                for (int i = 0; i < frig; i++){
                                    if(tabuleiro[linhadd + i][colunadd + i] != 0) {
                                        ocupadodd = 1;
                                        break;
                                    }
                                }

                                if (!ocupadodd){
                                    for (int i = 0; i < frig; i++) {
                                    tabuleiro[linhadd + i][colunadd + i] = 3;
                                    }

                                }else {
                                    printf("Opção Inválida\n");
                                }                                
                            }else {
                                printf("Opção Invalida\n");
                            }           
                        break;
                }
            }while(opcao_direcao < 1 || opcao_direcao > 4);

        break;            
    
    default:
            printf("Opção inválida\n");
        break;
    }


    } while (opcao_menu != 3);




    return 0;
}