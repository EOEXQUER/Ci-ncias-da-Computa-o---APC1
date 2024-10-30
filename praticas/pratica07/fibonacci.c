#include <stdio.h>
int main () {
  
  int n, anterior = 0, proximo = 1;

  //Solicita ao usuário o número de termos da série de Fibonacci
  printf("Digite a quantidade de termos da serie de Fibonacci: ");
  scanf("%d", &n);

  //Loop para gerar e imprimir os 'n' primeiros números da série de Fibonacci
  for (int i= 0; i < n; i++) {
    printf("%d,", proximo);

    //Atualiza os valores de 'anterior' e 'proximo' para o próximo termo da série
    int auxiliar = proximo;
    proximo = anterior + proximo;
    anterior = auxiliar;
  }

  printf("\n"); //Para finalizar a linha de saída
  return 0;
}