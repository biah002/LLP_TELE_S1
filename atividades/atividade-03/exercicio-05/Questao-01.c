#include <stdio.h>

//Programa em C que exibe os números pares de 1 a 10 usando um loop while:

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d é par\n", i);
        }
        i++;
    }

    return 0;
}