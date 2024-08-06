#include <stdio.h>

//Programa em C que calcula a soma dos primeiros 10 números inteiros positivos usando um loop for:

int main() {
    int soma = 0; // variável acumuladora

    for (int i = 1; i <= 10; i++) {
        soma += i; // adiciona o número atual à soma
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}