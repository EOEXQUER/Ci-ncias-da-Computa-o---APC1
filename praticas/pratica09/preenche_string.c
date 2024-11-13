#include <stdio.h>
#include <string.h>

int main() {
  char string[11]; // Declara uma string com 11 posições
  char tecla; // Declara uma variável para armazenar o caractere da entrada

  // Preenche a string com caractere nulo '\0'
  memset(string, '\0', sizeof(string));

  // Lê um caractere do usuário
  printf("Digite um caractere: ");
  scanf("%c", &tecla);

  // Preenche as 10 primeiras posições da string com o caractere lido
  memset(string, tecla, 10);

  // Imprime a string após o primeiro preenchimento
  printf("%s\n", string);

  //Preenche as 5 primeiras posições da string com o caractere '*'
  memset(string, '*', 5);

  // Imprime a string após definir o segundo preenchimento
  printf("%s\n", string);

  // Define o caractere nulo na posição 5 para encerrar a string
  string[5] = '\0';

  // Imprime a string após definir o caractere nulo na posição 5
  printf("%s\n", string);

  // Loop para imprimir cada caractere individualmente
  for (int i = 0; i < 10; i++) {
    printf("%c", string[i]);
  }
   printf("\n");


   return 0;
}