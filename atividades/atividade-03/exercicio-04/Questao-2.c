#include <stdio.h>

//Crie um programa que determine se um ano é bissexto ou não. Um ano é bissexto se for divisível por 4, exceto quando é divisível por 100 (a menos que também seja divisível por 400). Use a declaração if else para verificar as condições.

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("O ano %d é bissexto.\n", ano);
            } else {
                printf("O ano %d não é bissexto.\n", ano);
            }
        } else {
            printf("O ano %d é bissexto.\n", ano);
        }
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}