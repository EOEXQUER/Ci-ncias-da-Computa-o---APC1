#include <stdio.h>

int main() {
  // Declara uma matriz 3x3 de inteiros
  int matriz [3][3];

  // Atribui valores para cada posição da matriz
  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[0][2] = 3;
  matriz[1][0] = 4;
  matriz[1][1] = 5;
  matriz[1][2] = 6;
  matriz[2][0] = 7;
  matriz[2][1] = 8;
  matriz[2][2] = 9;

  // Loop para percorrer as linhas da matriz
  for(int i = 0; i < 3; i++) {
    // Loop para percorrer as colunas da matriz
    for(int j = 0; j < 3; j++) {
        printf("%d\t", matriz[i][j]); // Imprime o valor na posição [i][j]
    }
    printf("\n"); // Nova linha após cada linha da matriz
  }

    return 0;
}