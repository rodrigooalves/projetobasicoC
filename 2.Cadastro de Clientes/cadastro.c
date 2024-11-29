#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_CLIENTES 100

void traco() {
    printf("-----------------------------------\n");
}

void pulalinha() {
    printf("\n");
}

typedef struct {
    char nome[50];
    char email[50];
} Cliente;


int main () {

    Cliente clientes[MAX_CLIENTES];
    int opcao, numClientes = 0;

    do {
        system("clear || cls");
        printf("Cadastro de clientes");
        pulalinha();
        printf("Seleciona uma opcao:");
        pulalinha();
        traco();
        printf("1. Adicionar cliente\n");
        printf("2. Visualizar cliente\n");
        printf("3. Editar CLiente\n");
        printf("4. Excluir cliente\n");
        printf("5. Sair do programa\n");
        traco();
        scanf("%d", &opcao);

        switch (opcao){

            case 1: {
                printf("Digite o nome do cliente: ");
                scanf("%s", clientes[numClientes].nome);

                printf("Digite o email do cliente: ");
                scanf("%s", clientes[numClientes].email);

                numClientes++;

                printf("Cliente adicionado com sucesso. com muito sucesso!\n");
                break;
            
            }

            case 2: {

                printf("Clientes Cadastrados: ");
                traco();

                for(int i = 0; i< numClientes; i++) {
                    printf("Nome: %s\n", clientes[i].nome);
                    printf("Email: %s\n", clientes[i].email);
                    traco();
                }
                break;
            }

            case 3: {

                char nome[100];

                printf("Digite o nome do cliente que deseja editar: \n");
                scanf("%s", &nome);
                
                for( int i = 0; i < numClientes; i++) {
                    if (strcmp(clientes[i].nome, nome) == 0){
                        printf("Digite o nome do cliente: ");
                        scanf("%s", clientes[i].nome);

                        printf("Digite o novo email do cliente: ");
                        scanf("%s", clientes[i].email);

                        printf("Cliente editado com sucesso! .\n");
                        break;
                    }
                }

            }
        }

    } while (opcao != 5);
return 0;
}