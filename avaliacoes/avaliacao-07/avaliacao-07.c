#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char descricao[50];
    float valor_unitario;
    int quantidade_estoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int total_produtos = 0;

void cadastrar_produto() {
    if (total_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    Produto p;
    printf("Informe o código do produto: ");
    scanf("%d", &p.codigo);
    printf("Informe a descrição do produto: ");
    scanf(" %[^\n]", p.descricao);
    printf("Informe o valor unitário do produto: ");
    scanf("%f", &p.valor_unitario);
    printf("Informe a quantidade em estoque: ");
    scanf("%d", &p.quantidade_estoque);

    produtos[total_produtos++] = p;
    printf("Produto cadastrado com sucesso!\n");
}

void consultar_produto() {
    int codigo;
    printf("Informe o código do produto para alteração: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado!\n");
            printf("Código: %d\n", produtos[i].codigo);
            printf("Descrição: %s\n", produtos[i].descricao);
            printf("Valor Unitário: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade_estoque);

            printf("Informe a nova descrição: ");
            scanf(" %[^\n]", produtos[i].descricao);
            printf("Informe o novo valor unitário: ");
            scanf("%f", &produtos[i].valor_unitario);
            printf("Informe a nova quantidade em estoque: ");
            scanf("%d", &produtos[i].quantidade_estoque);

            printf("Produto alterado com sucesso!\n");
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

void listar_produtos() {
    printf("Lista de produtos:\n");
    for (int i = 0; i < total_produtos; i++) {
        float valor_estoque = produtos[i].valor_unitario * produtos[i].quantidade_estoque;
        printf("Código: %d, Descrição: %s, Valor Unitário: %.2f, Quantidade em Estoque: %d, Valor do Estoque: %.2f\n",
               produtos[i].codigo, produtos[i].descricao, produtos[i].valor_unitario, produtos[i].quantidade_estoque, valor_estoque);
    }
}

void excluir_produto() {
    int codigo;
    printf("Informe o código do produto para exclusão: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado: %s\n", produtos[i].descricao);
            char confirmacao;
            printf("Tem certeza que deseja excluir? (s/n): ");
            scanf(" %c", &confirmacao);
            if (confirmacao == 's' || confirmacao == 'S') {
                // Move todos os produtos a frente da posição excluída
                for (int j = i; j < total_produtos - 1; j++) {
                    produtos[j] = produtos[j + 1];
                }
                total_produtos--;
                printf("Produto excluído com sucesso!\n");
            } else {
                printf("Exclusão cancelada.\n");
            }
            return;
        }
    }
    printf("Produto não encontrado!\n");
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar Todos os Produtos\n");
        printf("4. Exclusão do Produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_produto();
                break;
            case 2:
                consultar_produto();
                break;
            case 3:
                listar_produtos();
                break;
            case 4:
                excluir_produto();
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
