#include <stdio.h>

int main(){

// entrada da carta 01
    char estado01;
    char codigo_carta01[4];
    char nome_cidade01[20];
    int populacao01;
    float area01, pib01, densidade_demografica01;
    double pib_per_capta01 = 1;
    int turismo01;

    // entrada da carta 2
    char estado02;
    char codigo_carta02[4];
    char nome_cidade02[20];
    int populacao02;
    float area02, pib02, densidade_demografica02;
    double pib_per_capta02;
    int turismo02;

// inserindo dados da primeira carta
    printf("Iniciando cadastro da primeira carta.\n");

    printf("Digite o código do Estado (de A - H):");
    scanf(" %c", &estado01);

    printf("Digite o código da Carta (Codigo do Estado + numero):");
    scanf("%s", codigo_carta01);

    printf("Digite o nome da Cidade:");
    getchar();
    fgets(nome_cidade01, 20, stdin);
    
    printf("Digite a quantidade populacional:");
    scanf("%d", &populacao01);

    printf("Digite a área da cidade(em km²):");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade (em Bilhões):");
    scanf("%f", &pib01);

    printf("Digite a quantidade que pontos turisticos:");
    scanf("%d", &turismo01);


// inserindo dados da sugunda carta
    printf("\n\nIniciando cadastro da segunda carta.\n");

    printf("Digite o código do Estado (de A - H):");
    scanf(" %c", &estado02);

    printf("Digite o código da Carta (Codigo do Estado + numero):");
    scanf("%s", codigo_carta02);

    printf("Digite o nome da Cidade:");
    getchar();
    fgets(nome_cidade02, 20, stdin);

    printf("Digite a quantidade populacional:");
    scanf("%d", &populacao02);

    printf("Digite a área da cidade(em km²):");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib02);

    printf("Digite a quantidade que pontos turisticos:");
    scanf("%d", &turismo02);

// calculando
    
    densidade_demografica01 =(float) populacao01 / area01;
    pib_per_capta01 =(float) (pib01*1e9) / populacao01;


    densidade_demografica02 = (float) populacao02 / area02;
    pib_per_capta02 = (float) (pib02*1e9) / populacao02;



//imprimindo dados das cartas

    printf("\n\n -= Carta 01 =- \n");
    printf("Estado - %c\n", estado01);
    printf("Código da Carta - %s\n", codigo_carta01);
    printf("Cidade - %s", nome_cidade01);
    printf("População de %d\n", populacao01);
    printf("Área de %.2fkm²\n", area01);
    printf("PIB de  R$%.2f \n", pib01);
    printf("%d Pontos Turisticos\n", turismo01);
    printf("Densidade demografica de %.2f habitantes por km²\n", densidade_demografica01);
    printf("PIB per capta de R$%.2f\n", pib_per_capta01);

    printf("\n--------------------------------------- \n");

    printf(" -= Carta 02 =- \n");
    printf("Estado - %c\n", estado02);
    printf("Código da Carta - %s\n", codigo_carta02);
    printf("Cidade - %s", nome_cidade02);
    printf("População de %d\n", populacao02);
    printf("Área de %.2fkm²\n", area02);
    printf("PIB de  R$%.2f \n", pib02);
    printf("%d Pontos Turisticos\n", turismo02);
    printf("Densidade demografica de %.2f habitantes por km²\n", densidade_demografica02);
    printf("PIB per capta de R$%.2f\n", pib_per_capta02);

    return 0;
}