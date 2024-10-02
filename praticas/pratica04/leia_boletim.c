#include <stdio.h>

int main() {
  int matricula = 0;
  
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Entre com a matricula: ");
  scanf("%i", &matricula);
  printf("Você digitou: %i\n", matricula);

  printf("Entre com a nota A1: ");
  scanf("%f", &a1);
  printf("Você digitou: %f\n", a1);

  printf("Entre com a nota A2: ");
  scanf("%f", &a2);
  printf("Você digitou: %f\n", a2);

  media = (a1 + a2) / 2;
  printf("A média é: %f\n", media);
  
  return 0;
}
