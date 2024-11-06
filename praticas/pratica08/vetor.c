#include <stdio.h>

int main() {
    // Declara um vetor de inteiros com 5 posições
    int vetor[5];

    // Atribui valores para cada posição do vetor
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;

    // Loop para imprimir os valores do vetor
    for(int i = 0; i < 5; i++) {
        printf("%d", vetor[i]);
    }

     printf("\n"); // Para finalizar a linha de saída

  return 0;
}