#include <stdio.h>
int main() {
    // Percorrer os valores de 1 a 50
    for (int i = 1; i <= 50; i++) {
        // Verificar se o número é par
        if (i % 2 == 0) {
            // Se for par, imprimir o número
            printf("%d\n", i);
        }
    }
    return 0;
}