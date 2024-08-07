#include <stdio.h>

int main() {
    int numeros[5]; // array para armazenar os números
    int soma = 0; // variável para armazenar a soma

    // Loop para ler os números do usuário
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Loop para calcular a soma dos números
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    // Exibe a soma dos números
    printf("A soma dos números é: %d\n", soma);

    return 0;
}

