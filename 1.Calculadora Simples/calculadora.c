#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1, n2, resultado;
    int opcao;
    
    do {
        //GUARDANDO AS VARIAVEIS
        printf("Digite o primeiro número: ");
        scanf("%f", &n1);
        printf("Digite o segundo número: ");
        scanf("%f", &n2);

        //ENTRANDO NAS OPERAÇÂOES
        printf("--------------------------------\n");
        printf("Escolha a operação desejada: \n");
        printf("--------------------------------\n");
        printf("Opção 1. Adição: \n");
        printf("Opçao 2. Subtração \n");
        printf("Opção 3. Multiplicação: \n");
        printf("Opçao 4. Divisão \n");
        printf("--------------------------------\n");
        printf("Opçao 5. Encerra o programa \n");
        printf("-------------------------------\n");
        scanf("%d", &opcao);


        switch (opcao) {
            // OPERADOR DA ADIÇÃO
            case 1:
                resultado = n1 + n2;
                printf("Resultado: %.2f\n", resultado);
                break;

            // OPERADOR DA SUBTRAÇÃO
            case 2:
                resultado = n1 - n2;
                printf(" Resultado: %.2f\n", resultado);
                break;

            // OPERADOR DA MULTIPLICAÇÃO
            case 3:
                resultado = n1 * n2;
                printf("Resultado: %.2f\n", resultado);
                break;

            // OPERADOR DA DIVISAO
            case 4:
                if ( n2 != 0 ){
                    resultado = n1 / n2;
                    printf(" Resultado: %.2f\n", resultado );
                } else {
                    printf(" Divisão por zero nao é permitido: \n ");
                }
                break;
            
            // ENCERRANDO CALCULADORA
            case 5:
                printf(" Encerrando calculadora. ");
                break;

            // Default
            default:
                printf("Operador Inválido.\n");
                break;
        }
} while ( opcao !=5);


return 0;
}