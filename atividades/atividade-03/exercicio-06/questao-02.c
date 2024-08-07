#include <stdio.h>

int main() {
    int matriz[3][3]; // matriz 3x3
    int soma_diagonal = 0; // variável para armazenar a soma da diagonal principal

    // Loop aninhado para ler os elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma dos elementos da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    // Exibe a soma dos elementos da diagonal principal
    printf("A soma da diagonal principal é: %d\n", soma_diagonal);

    return 0;
}