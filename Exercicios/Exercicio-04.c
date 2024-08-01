#include <stdio.h>
//Escreva um programa em c que leia um número inteiro e verifique se ele é positivo, negativo ou zero. Use a declaração if.Use a função scanf para ler o número e compare-o com zero.
int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;

}