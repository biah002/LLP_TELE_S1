#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Criar um arquivo para armazenar linhas de texto
    FILE *arquivo = fopen("arquivo_de_texto.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    // 2. Alimentar o arquivo com dados digitados no teclado
    char linha[256];
    printf("Digite linhas de texto (digite 'sair' para terminar):\n");
    while (1) {
        printf("> ");
        fgets(linha, 256, stdin);
        if (strcmp(linha, "sair\n") == 0) {
            break;
        }
        fprintf(arquivo, "%s", linha);
    }

    // 5. Fechar o arquivo
    fclose(arquivo);

    // 6. Abrir o arquivo no modo de leitura
    arquivo = fopen("arquivo_de_texto.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    // 7. Ler cada linha do arquivo e mostrá-la na tela
    char buffer[256];
    while (fgets(buffer, 256, arquivo) != NULL) {
        printf("%s", buffer);
    }

    // 8. Fechar o arquivo
    fclose(arquivo);

    return 0;
}

