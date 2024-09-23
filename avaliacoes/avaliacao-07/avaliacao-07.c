#include <stdio.h>
#include <string.h>

// Estrutura de produto
typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int quantidadeEstoque;
} Produto;

// Array de produtos
Produto produtos[100];
int numProdutos = 0;

// Função para cadastrar produto
void cadastrarProduto() {
    printf("Cadastrar Produto:\n");
    printf("Codigo: ");
    scanf("%d", &produtos[numProdutos].codigo);
    printf("Descricao: ");
    scanf("%s", produtos[numProdutos].descricao);
    printf("Valor Unitario: ");
    scanf("%f", &produtos[numProdutos].valorUnitario);
    printf("Quantidade Estoque: ");
    scanf("%d", &produtos[numProdutos].quantidadeEstoque);
    numProdutos++;
}

// Função para consultar produto para alteração
void consultarProdutoAlteracao() {
    int codigo;
    printf("Consultar Produto para Alteração:\n");
    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
            printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
            printf("Deseja alterar? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == 's') {
                printf("Nova descricao: ");
                scanf("%s", produtos[i].descricao);
                printf("Novo valor unitario: ");
                scanf("%f", &produtos[i].valorUnitario);
                printf("Nova quantidade estoque: ");
                scanf("%d", &produtos[i].quantidadeEstoque);
            }
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

// Função para listar todos os produtos
void listarProdutos() {
    printf("Listar todos os produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
        printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
        printf("Valor do Estoque: %.2f\n", produtos[i].valorUnitario * produtos[i].quantidadeEstoque);
    }
}

// Função para excluir produto
void excluirProduto() {
    int codigo;
    printf("Excluir Produto:\n");
    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado.\n");
            printf("Deseja excluir? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            if (resposta == 's') {
                for (int j = i; j < numProdutos - 1; j++) {
                    produtos[j] = produtos[j + 1];
                }
                numProdutos--;
                printf("Produto excluido com sucesso.\n");
            }
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

int main() {
    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar todos os produtos\n");
        printf("4. Excluir Produto\n");
        printf("5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                consultarProdutoAlteracao();
                break;
            case 3:
                listarProdutos();
                break;
            case 4:
                excluirProduto();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 5);
    return 0;
}
