#include <stdio.h>

//Verificação de Número Par

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é par!\n");
    } else {
        printf("O número é ímpar!\n");
    }

    return 0;
}