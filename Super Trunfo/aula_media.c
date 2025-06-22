// vamos fazer o exercicio de calculo da media.

#include <stdio.h>

    main(){


        int nota1, nota2, nota3;
        float resultado;
//o certo seria usar as variaveis nota como float tambem. mas vamos fazer assim pelo exercicio do CAST
        printf("Digite a primeira nota: ");
        scanf("%d", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%d", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%d", &nota3);
// usando cast (float) pra alterar a variavel inteira pra float
        resultado = (float)(nota1 + nota2 + nota3)/3;

        printf("Sua média é %.1f\n", resultado);

        return 0;
    }