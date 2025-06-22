#include <stdio.h>

int main(){

// entrada da carta 1
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
    float area02, pib02 , densidade_demografica02;
    double sp02, pib_per_capta02;
    int turismo02;


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
    printf("\nIniciando cadastro da segunda carta.\n");
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

//imprimindo dados das cartas
    printf("\n-------------- \n");
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
    printf("Seu Super Poder é calculado em %.2f\n", sp01);

    printf("\n-------------- \n");
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
    printf("Seu Super Poder é calculado em %.2f\n", sp02);

    printf("------------------------------------------- \n\n");

    printf("---------------------\n");
    printf("--== COMPARATIVO ==--\n");
    printf("---------------------\n");


// escolhendo DUAS comparações.

char opcao1, opcao2;
int resultado1, resultado2;

    printf("Escolha a primeira opção de comparação:\n");
    printf("P - População.\n");
    printf("A - Área.\n");
    printf("I - PIB.\n");
    printf("T - Pontos Turisticos.\n");
    printf("D - Densidade Demografica.\n");
    printf("C - PIB per Capta.\n");
    printf("S - Super Poder.\n");
    printf("Escolha : ");
    scanf(" %c", &opcao1);

    printf("\nEscolha a segunda opção de comparação:\n");
    printf("P - População.\n");
    printf("A - Área.\n");
    printf("I - PIB.\n");
    printf("T - Pontos Turisticos.\n");
    printf("D - Densidade Demografica.\n");
    printf("C - PIB per Capta.\n");
    printf("S - Super Poder.\n");
    printf("Escolha : ");
    scanf(" %c", &opcao2);

// evitar 2 comparações iguais
    if (opcao1 == opcao2){
        printf("Combinação inválida\n");
    }else {
// pontuação de 'resultado1' e primeira parte da mensagem de escolha.
        switch(opcao1){
            case 'P':
            case 'p':
                resultado1 = populacao01 > populacao02 ? 1 : 0;
                printf("\nVocê escolheu POPULACÃO e ");
                break;

            case 'A':
            case 'a':
                resultado1 = area01 > area02 ? 1:0;
                printf("\nVocê escolheu ÁREA e ");
                break;
            case 'I':
            case 'i':
                resultado1 = pib01 > pib02 ? 1:0;
                printf("\nVocê escolheu PIB e ");
                break;
            case 'T':
            case 't':
                resultado1 = turismo01 > turismo02 ? 1:0;
                printf("\nVocê escolheu TURISMO e ");
                break;
            case 'D':
            case 'd':
                resultado1 = densidade_demografica01 < densidade_demografica02 ? 1:0;
                printf("\nVocê escolheu DENSIDADE DEMOGRAFICA e ");
                break;
            case 'C':
            case 'c':
                resultado1 = pib_per_capta01 > pib_per_capta02 ? 1:0;
                printf("\nVocê escolheu PIB PER CAPTA e ");
                break;
            case 'S':
            case 's':
                resultado1 =sp01 > sp02 ? 1:0;
                printf("\nVocê escolheu SUPER PODER e ");
                break;
            default:
                printf("\nOpção Inválida\n");
                
            }
//pontuação de 'resultado2' e segunda parte da mensagem de escolha.
        switch(opcao2){
            case 'P':
            case 'p':
                resultado2 = populacao01 > populacao02 ? 1 : 0;
                printf("POPULAÇÃO.\n");
                break;

            case 'A':
            case 'a':
                resultado2 = area01 > area02 ? 1:0;
                printf("ÁREA.\n");
                break;
            case 'I':
            case 'i':
                resultado2 = pib01 > pib02 ? 1:0;
                printf("PIB.\n");
                break;
            case 'T':
            case 't':
                resultado2 = turismo01 > turismo02 ? 1:0;
                printf("TURISMO.\n");
                break;
            case 'D':
            case 'd':
                resultado2 = densidade_demografica01 < densidade_demografica02 ? 1:0;
                printf("DENSIDADE DEMOGRAFICA.\n");
                break;
            case 'C':
            case 'c':
                resultado2 = pib_per_capta01 > pib_per_capta02 ? 1:0;
                printf("PIB PER CAPTA.\n");
                break;
            case 'S':
            case 's':
                resultado2 =sp01 > sp02 ? 1:0;
                printf("SUPER PODER.\n");
                break;
            default:
                printf("Opção Inválida\n");
                
            }
//comparativo e mensagem de vencedor por categoria.
        switch(opcao1){
            case 'P':
            case 'p':
                if (populacao01 > populacao02){
                    printf("O Vencedor com maior número de POPULAÇÃO é %s com total de %u habitantes \n", nome_cidade01, populacao01);
                    printf("Contra %u habitantes de %s\n", populacao02, nome_cidade02);
                }else{
                    printf("O Vencedor com maior número de POPULAÇÃO é %s com total de %u habitantes \n", nome_cidade02, populacao02);
                    printf("Contra %u habitantes de %s\n", populacao01, nome_cidade01);
                }break;
            case 'A':
            case 'a':
                if (area01 > area02){
                    printf("O Vencedor com a maior ÁREA é %s com total de %.2fkm² \n", nome_cidade01, area01);
                    printf("Contra %.2fkm² de %s\n", area02, nome_cidade02);
                }else{
                    printf("O Vencedor com a maior ÁREA é %s com total de %.2fkm² \n", nome_cidade02, area02);
                    printf("Contra %.2fkm² de %s\n", area01, nome_cidade01);
                }break;
            case 'I':
            case 'i':
                if (pib01 > pib02){
                    printf("O Vencedor com  o maior PIB é %s com total de R$%.2f Bilhões\n", nome_cidade01, pib01);
                    printf("Contra R$%.2f Bilhões de %s\n", pib02, nome_cidade02);
                }else{
                    printf("O Vencedor com  o maior PIB é %s com total de R$%.2f Bilhões \n", nome_cidade02, pib02);
                    printf("Contra R$%.2f Bilhões de %s\n", pib01, nome_cidade01);
                }break;
            case 'T':
            case 't':
                if (turismo01 > turismo02){
                    printf("O Vencedor com maior número de PONTOS TURÍSTICOS é %s com total de %d pontos turísticos \n", nome_cidade01, turismo01);
                    printf("Contra %d de %s\n", turismo02, nome_cidade02);
                }else{
                    printf("O Vencedor com maior número de PONTOS TURÍSTICOS é %s com total de %d pontos turísticos \n ", nome_cidade02, turismo02);
                    printf("Contra %d de %s\n", turismo01, nome_cidade01);
                }break;
            case 'D':
            case 'd':
                if (densidade_demografica01 < densidade_demografica02){
                    printf("O Vencedor com a menor DENSIDADE DEMOGRÁFICA é %s com total de %.2f hab/km² \n", nome_cidade01, densidade_demografica01);
                    printf("Contra %.2f hab/km² de %s\n", densidade_demografica02, nome_cidade02);
                }else{
                    printf("O Vencedor com a menor DENSIDADE DEMOGRÁFICA é %s com total de %.2f hab/km² \n", nome_cidade02, densidade_demografica02);
                    printf("Contra %.2f hab/km² de %s\n", densidade_demografica01, nome_cidade01);
                }break;
            case 'C':
            case 'c':
                if (pib_per_capta01 > pib_per_capta02){
                    printf("O Vencedor com maior PIB per Capta é %s com total de R$%.2f \n", nome_cidade01, pib_per_capta01);
                    printf("Contra R$%.2f de %s\n", pib_per_capta02, nome_cidade02);
                }else{
                    printf("O Vencedor com maior PIB per Capta é %s com total de R$%.2f \n", nome_cidade02, pib_per_capta02);
                    printf("Contra R$%.2f de %s\n", pib_per_capta01, nome_cidade01);
                }break;
            case 'S':
            case 's':
                if(sp01 > sp02){
                    printf("O Vencedor com uma carga de %.2f de SUPER PODER é %s\n",sp01, nome_cidade01);
                    printf("Contra %.2f de %s\n", sp02 ,nome_cidade02);
                }else{
                    printf("O Vencedor com uma carga de %.2f de SUPER PODER é %s\n",sp02, nome_cidade02);
                    printf("Contra %.2f de %s\n", sp01 ,nome_cidade01);
                }break;
            }
        switch(opcao2){
            case 'P':
            case 'p':
                if (populacao01 > populacao02){
                    printf("O Vencedor com maior número de POPULAÇÃO é %s com total de %u habitantes \n", nome_cidade01, populacao01);
                    printf("Contra %u habitantes de %s\n", populacao02, nome_cidade02);
                }else{
                    printf("O Vencedor com maior número de POPULAÇÃO é %s com total de %u habitantes \n", nome_cidade02, populacao02);
                    printf("Contra %u habitantes de %s\n", populacao01, nome_cidade01);
                }break;
            case 'A':
            case 'a':
                if (area01 > area02){
                    printf("O Vencedor com a maior ÁREA é %s com total de %.2fkm² \n", nome_cidade01, area01);
                    printf("Contra %.2fkm² de %s\n", area02, nome_cidade02);
                }else{
                    printf("O Vencedor com a maior ÁREA é %s com total de %.2fkm² \n", nome_cidade02, area02);
                    printf("Contra %.2fkm² de %s\n", area01, nome_cidade01);
                }break;
            case 'I':
            case 'i':
                if (pib01 > pib02){
                    printf("O Vencedor com  o maior PIB é %s com total de R$%.2f Bilhões\n", nome_cidade01, pib01);
                    printf("Contra R$%.2f Bilhões de %s\n", pib02, nome_cidade02);
                }else{
                    printf("O Vencedor com  o maior PIB é %s com total de R$%.2f Bilhões \n", nome_cidade02, pib02);
                    printf("Contra R$%.2f Bilhões de %s\n", pib01, nome_cidade01);
                }break;
            case 'T':
            case 't':
                if (turismo01 > turismo02){
                    printf("O Vencedor com maior número de PONTOS TURÍSTICOS é %s com total de %d pontos turísticos \n", nome_cidade01, turismo01);
                    printf("Contra %d de %s\n", turismo02, nome_cidade02);
                }else{
                    printf("O Vencedor com maior número de PONTOS TURÍSTICOS é %s com total de %d pontos turísticos \n ", nome_cidade02, turismo02);
                    printf("Contra %d de %s\n", turismo01, nome_cidade01);
                }break;
            case 'D':
            case 'd':
                if (densidade_demografica01 < densidade_demografica02){
                    printf("O Vencedor com a menor DENSIDADE DEMOGRÁFICA é %s com total de %.2f hab/km²\n", nome_cidade01, densidade_demografica01);
                    printf("Contra %.2f hab/km² de %s\n", densidade_demografica02, nome_cidade02);
                }else{
                    printf("O Vencedor com a menor DENSIDADE DEMOGRÁFICA é %s com total de %.2f hab/km²\n", nome_cidade02, densidade_demografica02);
                    printf("Contra %.2f hab/km² de %s\n", densidade_demografica01, nome_cidade01);
                }break;
            case 'C':
            case 'c':
                if (pib_per_capta01 > pib_per_capta02){
                    printf("O Vencedor com maior PIB per Capta é %s com total de R$%.2f\n", nome_cidade01, pib_per_capta01);
                    printf("Contra R$%.2f de %s\n", pib_per_capta02, nome_cidade02);
                }else{
                    printf("O Vencedor com maior PIB per Capta é %s com total de R$%.2f\n", nome_cidade02, pib_per_capta02);
                    printf("Contra R$%.2f de %s\n", pib_per_capta01, nome_cidade01);
                }break;
            case 'S':
            case 's':
                if(sp01 > sp02){
                    printf("O Vencedor com uma carga de %.2f de SUPER PODER é %s\n",sp01, nome_cidade01);
                    printf("Contra %.2f de %s\n", sp02 ,nome_cidade02);
                }else{
                    printf("O Vencedor com uma carga de %.2f de SUPER PODER é %s\n",sp02, nome_cidade02);
                    printf("Contra %.2f de %s\n", sp01 ,nome_cidade01);
                }break;
        }
//mensagem de Carta Vencedora.
        if(resultado1 && resultado2){
            printf("Vence a carta %s %s com duas vitórias.\n", codigo_carta01, nome_cidade01);
            }else if (resultado1 != resultado2){
            printf("Houve um empate.\n");
            }else{
            printf("Carta %s %s venceu com duas vitórias.\n", codigo_carta02, nome_cidade02);
            }
    }
    

    return 0;
}