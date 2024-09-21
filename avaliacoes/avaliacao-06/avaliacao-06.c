#include <stdio.h>

#include <string.h>


// Estrutura de produto

typedef struct {

    int codigo;

    char descricao[50];

    float valorUnitario;

    int qtdEstoque;

    float valorEstoque;

} Produto;


// Array de produtos

Produto produtos[100];


int main() {

    int opcao;

    int i = 0; // Índice do array de produtos


    do {

        // Tela de menu

        printf("----------------------------------------------------------------------\n");

        printf("Sistema de Estoque\n");

        printf("----------------------------------------------------------------------\n");

        printf("1) Entrada de Produtos\n");

        printf("2) Listar os Produtos\n");

        printf("3) Valor Total do Estoque\n");

        printf("4) Fim\n");

        printf("Opção: ");

        scanf("%d", &opcao);


        switch (opcao) {

            case 1:

                // Entrada de cadastro de produtos

                printf("----------------------------------------------------------------------\n");

                printf("Entrada de Cadastro de Produtos\n");

                printf("----------------------------------------------------------------------\n");

                printf("Código: ");

                scanf("%d", &produtos[i].codigo);

                printf("Descrição: ");

                fgets(produtos[i].descricao, 50, stdin);

                produtos[i].descricao[strlen(produtos[i].descricao) - 1] = '\0'; // Remover o caractere de quebra de linha

                printf("Valor Unitário: ");

                scanf("%f", &produtos[i].valorUnitario);

                printf("Qtd Estoque: ");

                scanf("%d", &produtos[i].qtdEstoque);

                produtos[i].valorEstoque = produtos[i].valorUnitario * produtos[i].qtdEstoque;

                printf("Valor Estoque: %.2f\n", produtos[i].valorEstoque);


                int gravar;

                printf("Digite (1-Para Gravar, 2-Voltar a tela inicial): ");

                scanf("%d", &gravar);


                if (gravar == 1) {

                    i++; // Incrementar o índice do array de produtos

                }

                break;

            // ...

        }

    } while (opcao != 4);


    return 0;

}

