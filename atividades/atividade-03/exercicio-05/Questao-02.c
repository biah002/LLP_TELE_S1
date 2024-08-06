#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Crie um programa em c que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite -1 para sair.

int main() {
    int numero_secreto;
    int chute;
    srand(time(NULL));
    numero_secreto = rand() % 100 + 1; // gera um número aleatório entre 1 e 100

    do {
        printf("Adivinhe um número entre 1 e 100 (-1 para sair): ");
        scanf("%d", &chute);

        if (chute == -1) {
            printf("Você desistiu!\n");
        } else if (chute < numero_secreto) {
            printf("Seu chute é baixo! Tente novamente.\n");
        } else if (chute > numero_secreto) {
            printf("Seu chute é alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto: %d\n", numero_secreto);
        }
    } while (chute != numero_secreto && chute != -1);

    return 0;
}