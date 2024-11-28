#include <stdio.h>
#include <stdlib.h>

void traco(){
    printf("------------------------------------\n");
}

int main () {
    int opcao;
    float n1,n2;

    do{
        system("clear || cls");
        printf("Calculadora do Rodrigo Alves\n");
        traco();
        printf("Escolha a operação:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        traco();
        printf("5. Para sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao){

            case 1:
                printf("Soma: A + B\n");
                traco();
                printf("A: \n");
                scanf("%f", &n1);
                printf("B: \n");
                scanf("%f", &n2);

                printf("resultado de %f + %f : %.2f\n\n", n1,n2, n1+n2);
                break;

            case 2:
                printf("Substracao: A - B\n");
                traco();
                printf("A: \n");
                scanf("%f", &n1);
                printf("B: \n");
                scanf("%f", &n2);

                printf("resultado de %f + %f : %.2f\n\n", n1,n2, n1-n2);
                break;

            case 3:
                printf("Multiplicacao: A * B\n");
                traco();
                printf("A: \n");
                scanf("%f", &n1);
                printf("B: \n");
                scanf("%f", &n2);

                printf("resultado de %f + %f : %.2f\n\n", n1,n2, n1*n2);
                break;

            case 4:
                printf("Divisao: A / B\n");
                traco();
                printf("A: \n");
                scanf("%f", &n1);
                printf("B: \n");
                scanf("%f", &n2);

                if (n2 != 0){
                    printf("resultado de %f + %f : %.2f\n\n", n1,n2, n1/n2);
                } else {
                    printf("Divisao por zero nao é permitido:\n");
                }
                break;

            case 5:
            printf("Finalizando Calculadora");
            break;

            default:
                printf("Operador invalido, escolha entre 1 e 5.\n");
                break;
        }

        if (opcao != 5) {
            printf("pressione Enter para continuar...");
            getchar();
            getchar();
        }

    }while(opcao != 5 );


return 0;
}