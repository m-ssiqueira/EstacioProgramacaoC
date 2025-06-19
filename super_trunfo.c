#include <stdio.h>

int main(){

// entrada da carta 01
    char estado01 = 'A';
    char codigo_carta01[4] = "A01";
    char nome_cidade01[20] = "São Paulo\n";
    unsigned int  populacao01 = 12325000;
    float pib01 = 699.28, area01 = 1521.11, densidade_demografica01;
    double sp01, pib_per_capta01;
    int turismo01 = 50;

// entrada da carta 2
    char estado02 = 'B';
    char codigo_carta02[4] = "B02";
    char nome_cidade02[20] = "Rio de Janeiro\n";
    unsigned int populacao02 = 6748000;
    float area02 = 1200.25, pib02 = 300.50, densidade_demografica02;
    double sp02, pib_per_capta02;
    int turismo02 = 30;

// eu fixei os valores das variaveis para agilizar os testes



// inserindo dados da primeira carta
/*
    printf("Iniciando cadastro da primeira carta.\n");
    printf("------------------------------------\n");

    printf("Digite o código do Estado (de A - H):");
    scanf(" %c", &estado01);

    printf("Digite o código da Carta (Código do Estado + numero):");
    scanf("%s", codigo_carta01);
   
    printf("Digite o nome da Cidade:");
    getchar();
    fgets(nome_cidade01, 20, stdin);
    
    printf("Digite a quantidade populacional:");
    scanf("%u", &populacao01);

    printf("Digite a área da cidade(em km²):");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade (em Bilhões):");
    scanf("%f", &pib01);

    printf("Digite a quantidade que pontos turísticos:");
    scanf(" %d", &turismo01);


// inserindo dados da sugunda carta
    printf("\n\nIniciando cadastro da segunda carta.\n");
    printf("------------------------------------\n");

    printf("Digite o código do Estado (de A - H):");
    scanf(" %c", &estado02);

    printf("Digite o código da Carta (Codigo do Estado + numero):");
    scanf("%s", codigo_carta02);

    printf("Digite o nome da Cidade:");
    getchar();
    fgets(nome_cidade02, 20, stdin);

    printf("Digite a quantidade populacional:");
    scanf("%u", &populacao02);

    printf("Digite a área da cidade(em km²):");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib02);

    printf("Digite a quantidade que pontos turísticos:");
    scanf("%d", &turismo02);

*/
// definindo dados das cartas

// calculando
    
    densidade_demografica01 =(float) populacao01 / area01;
    pib_per_capta01 =(float) (pib01*1e9) / populacao01;

    densidade_demografica02 = (float) populacao02 / area02;
    pib_per_capta02 = (float) (pib02*1e9) / populacao02;

// Super poder
    sp01 = (float) populacao01 + area01 + pib01 + turismo01 + pib_per_capta01 - densidade_demografica01;
    sp02 = (float) populacao02 + area02 + pib02 + turismo02 + pib_per_capta02 - densidade_demografica02;



//imprimindo dados das cartas
    printf("\n\n------------------------------------------- \n\n");
    printf("-------------- \n");
    printf("-= CARTA 01 =- \n");
    printf("-------------- \n");
    printf("Estado - %c\n", estado01);
    printf("Código da Carta - %s\n", codigo_carta01);
    printf("Cidade - %s", nome_cidade01);
    printf("População de %u\n", populacao01);
    printf("Área de %.2fkm²\n", area01);
    printf("PIB de  R$%.2f \n", pib01);
    printf("%d Pontos Turisticos\n", turismo01);
    printf("Densidade demografica de %.2f habitantes por km²\n", densidade_demografica01);
    printf("PIB per capta de R$%.2f\n", pib_per_capta01);
    printf("Seu Super Poder é calculado em %.2f\n\n", sp01);

    printf("------------------------------------------- \n\n");
    printf("-------------- \n");
    printf("-= CARTA 02 =- \n");
    printf("-------------- \n");
    printf("Estado - %c\n", estado02);
    printf("Código da Carta - %s\n", codigo_carta02);
    printf("Cidade - %s", nome_cidade02);
    printf("População de %u\n", populacao02);
    printf("Área de %.2fkm²\n", area02);
    printf("PIB de  R$%.2f \n", pib02);
    printf("%d Pontos Turisticos\n", turismo02);
    printf("Densidade demografica de %.2f habitantes por km²\n", densidade_demografica02);
    printf("PIB per capta de R$%.2f\n", pib_per_capta02);
    printf("Seu Super Poder é calculado em %.2f\n\n", sp02);

    printf("------------------------------------------- \n\n");

// comparando as cartas 

/*
//Solução do primeiro exercicio usando apenas verdadero ou falso
// variaveis de comparação:
short int _pop, _area, _pib, _tur, _depo, _ppc;
// condição
_pop    = populacao01 > populacao02;
_area   = area01 > area02;
_pib    = pib01 > pib02;
_tur    = turismo01 > turismo02;
_depo   = densidade_demografica01 < densidade_demografica02;
_ppc    = pib_per_capta01 > pib_per_capta02;   
// print
    printf("População : %d\n", _pop);
    printf("Área : %d\n", _area);
    printf("PIB : %d\n", _pib);
    printf("Turismo : %d\n", _tur);
    printf("Densidade Demográfica : %d\n", _depo);
    printf("PIB per Capta: %d\n\n", _ppc);
*/

    printf("---------------------\n");
    printf("--== COMPARATIVO ==--\n");
    printf("---------------------\n");

// implementação do IF ELSE no comparativo e imprimindo a mensagem. segunda parte do exercicio
/*
    if (populacao01 > populacao02){
        printf ("O numero de habitantes na cidade %s é maior\n", nome_cidade01);
    }else{
        printf("O numero de habitantes na cidade %s é maior\n", nome_cidade02);
    }

    if (area01 > area02){
        printf("%s é a maior cidade\n", nome_cidade01);
    }else {
            printf("%s é a maior cidade\n", nome_cidade02);
        }
    
    if (pib01 > pib02){
        printf("O PIB de %s é maior.\n", nome_cidade01);
    }else{
        printf("O PIB de %s é maior.\n", nome_cidade02);
    }

    if (turismo01 > turismo02){
        printf("%s tem mais pontos turisticos.\n", nome_cidade01);
    }else{
        printf("%s tem mais pontos turisticos.\n", nome_cidade02);
    }

    if (densidade_demografica01 < densidade_demografica02){
        printf("%s tem uma maior area por habitante.\n", nome_cidade01);
    }else{
        printf("%s tem uma maior area por habitante.\n", nome_cidade02);
    }

    if (pib_per_capta01 > pib_per_capta02){
        printf("O PIB per Capta de %s é maior\n", nome_cidade01);
    }else{
        printf("O PIB per Capta de %s é maior\n", nome_cidade02);
    }

    if(sp01 > sp02){
        printf("%s é mais poderoso.\n", nome_cidade01);
    }else{
        printf("%s é mais poderoso.\n", nome_cidade02);
    }
*/

// solução usando SWITCH para fazer um menu comparativo
int opcao;
    printf("Escolha uma opição de comparação:\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos.\n");
    printf("5 - Densidade Demografica.\n");
    printf("6 - PIB per Capta.\n");
    printf("7 - Super Poder.\n");
    printf("Escolha : ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            if (populacao01 > populacao02){
                printf("O Vencedor com maior número de POPULAÇÃO é %s ", nome_cidade01);
                printf("Com total de %u habitantes contra %u habitantes de %s", populacao01, populacao02, nome_cidade02);
            }else{
                printf("O Vencedor com maior número de POPULAÇÃO é %s ", nome_cidade02);
                printf("Com total de %u habitantes contra %u habitantes de %s", populacao02, populacao01, nome_cidade01);
            }break;
        case 2:
            if (area01 > area02){
                printf("O Vencedor com a maior ÁREA é %s ", nome_cidade01);
                printf("Com total de %.2fkm² contra %.2fkm² de %s", area01, area02, nome_cidade02);
            }else{
                printf("O Vencedor com a maior ÁREA é %s", nome_cidade02);
                printf("Com total de %.2fkm² contra %.2fkm² de %s", area02, area01, nome_cidade01);
            }break;
        case 3:
            if (pib01 > pib02){
                printf("O Vencedor com  o maior PIB é %s ", nome_cidade01);
                printf("Com total de R$%.2f Bilhões contra R$%.2f Bilhões de %s", pib01, pib02, nome_cidade02);
            }else{
                printf("O Vencedor com  o maior PIB é %s ", nome_cidade02);
                printf("Com total de R$%.2f Bilhões contra R$%.2f Bilhões de %s", pib02, pib01, nome_cidade01);
            }break;
        case 4:
            if (turismo01 > turismo02){
                printf("O Vencedor com maior número de PONTOS TURÍSTICOS é %s ", nome_cidade01);
                printf("Com total de %d pontos turísticos contra %d de %s", turismo01, turismo02, nome_cidade02);
            }else{
                printf("O Vencedor com maior número de PONTOS TURÍSTICOS é %s ", nome_cidade02);
                printf("Com total de %d pontos turísticos contra %d de %s", turismo02, turismo01, nome_cidade01);
            }break;
        case 5:
            if (densidade_demografica01 < densidade_demografica02){
                printf("O Vencedor com a menor DENSIDADE DEMOGRÁFICA é %s ", nome_cidade01);
                printf("Com total de %.2f hab/km² contra %.2f hab/km² de %s", densidade_demografica01, densidade_demografica02, nome_cidade02);
            }else{
                printf("O Vencedor com a menor DENSIDADE DEMOGRÁFICA é %s ", nome_cidade02);
                printf("Com total de %.2f hab/km² contra %.2f hab/km² de %s", densidade_demografica02, densidade_demografica01, nome_cidade01);
            }break;
        case 6:
            if (pib_per_capta01 > pib_per_capta02){
                printf("O Vencedor com maior PIB per Capta é %s ", nome_cidade01);
                printf("Com total de R$%.2f contra R$%.2f de %s", pib_per_capta01, pib_per_capta02, nome_cidade02);
            }else{
                printf("O Vencedor com maior PIB per Capta é %s ", nome_cidade02);
                printf("Com total de R$%.2f contra R$%.2f de %s", pib_per_capta02, pib_per_capta01, nome_cidade01);
            }break;
        case 7:
            if(sp01 > sp02){
                printf("O Vencedor com uma carga de %f de SUPER PODER é %s",sp01, nome_cidade01);
                printf("Contra %.2f de %s", sp02 ,nome_cidade02);
            }else{
                printf("O Vencedor com uma carga de %.2f de SUPER PODER é %s",sp02, nome_cidade02);
                printf("Contra %.2f de %s", sp01 ,nome_cidade01);
            }break;
        default:
            printf("Opção Inválida\n");
            
        }

    return 0;
}