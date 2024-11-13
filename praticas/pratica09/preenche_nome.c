#include <stdio.h>
#include <string.h>

int main() {

  char primeiro_nome[11]; // Declaração de variável para armazenar o primeiro nome
  char ultimo_nome[11]; // Declaração da variável para armazenar o último nome
  char nome[31];      // Declaração da variável para armazenar o nome completo

  // Leitura do primeiro nome
  printf("Digite o primeiro nome: ");
  scanf("%s", primeiro_nome);

  // Leitura do último nome
  printf("Digite o ultimo nome: ");
  scanf("%s", ultimo_nome);

  // Copia o primeiro nome para a variável 'nome'
  strcpy(nome, primeiro_nome);

  // Concatena um espaço em branco após o primeiro nome
  strcat(nome, " ");

  // Concatena o último nome à variável 'nome'
  strcat(nome, ultimo_nome);

  // Exibe o nome completo
  printf("Nome completo: %s\n", nome);

  return 0;
}
