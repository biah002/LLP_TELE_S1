#include <stdio.h>

//Troca de Valores

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("O primeiro número agora é: %d\n", num1);
    printf("O segundo número agora é: %d\n", num2);

    return 0;
}