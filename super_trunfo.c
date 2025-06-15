#include <stdio.h>

int main(){

// entrada da carta 01
    char estado01;
    char codigo_carta01[4];
    char nome_cidade01[20];
    unsigned int  populacao01;
    float pib01, area01, densidade_demografica01;
    double sp01, pib_per_capta01;
    int turismo01;

    // entrada da carta 2
    char estado02;
    char codigo_carta02[4];
    char nome_cidade02[20];
    unsigned int populacao02;
    float area02, pib02, densidade_demografica02;
    double sp02, pib_per_capta02;
    int turismo02;
// variaveis de comparação:

    short int _pop, _area, _pib, _tur, _depo, _ppc;


// inserindo dados da primeira carta
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

// calculando
    
    densidade_demografica01 =(float) populacao01 / area01;
    pib_per_capta01 =(float) (pib01*1e9) / populacao01;

    densidade_demografica02 = (float) populacao02 / area02;
    pib_per_capta02 = (float) (pib02*1e9) / populacao02;

// Super poder
    sp01 = (float) populacao01 + area01 + pib01 + turismo01 + pib_per_capta01 - densidade_demografica01;
    sp02 = (float) populacao02 + area02 + pib02 + turismo02 + pib_per_capta02 - densidade_demografica02;

// comparando as cartas

_pop    = populacao01 > populacao02;
_area   = area01 > area02;
_pib    = pib01 > pib02;
_tur    = turismo01 > turismo02;
_depo   = densidade_demografica01 < densidade_demografica02;
_ppc    = pib_per_capta01 > pib_per_capta02;

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

// imprimindo o comparativo onde 1 é vitória pra carta 1 e 0 é vitória pra carta 2
    printf("---------------------\n");
    printf("--== COMPARATIVO ==--\n");
    printf("---------------------\n");
    printf("População : %d\n", _pop);
    printf("Área : %d\n", _area);
    printf("PIB : %d\n", _pib);
    printf("Turismo : %d\n", _tur);
    printf("Densidade Demográfica : %d\n", _depo);
    printf("PIB per Capta: %d\n\n", _ppc);

    return 0;
}