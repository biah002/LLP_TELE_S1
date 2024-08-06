#include <stdio.h>

int main(void) {
  int x;

  printf("Digite a pontuação obtida no jogo de Sinuca (0-100): ");
  scanf("%d", &x);

  if (x < 0 || x > 100) {
    printf("Pontuação inválida. Por favor, digite um valor entre 0 e 100.\n");
  } else if (x < 10) {
    printf("Insuficiente\n");
  } else if (x < 40) {
    printf("Regular\n");
  } else if (x < 70) {
    printf("Bom\n");
  } else if (x < 90) {
    printf("Ótimo\n");
  } else {
    printf("Excelente\n");
  }

  return 0;
}