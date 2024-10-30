#include <stdio.h>

int main() {
   int numero, fatorial = 1; //Inicializamos fatorial com 1, pois é o elemento neutro da multiplicação

   //Solicita ao usuário que insira um número
   printf("Digite um numero para calcular o fatorial: ");
   scanf("%d", &numero);

   //Loop para calcular p fatorial de 'numero'
   for (int i = numero; i > 0; i--) {
    fatorial = fatorial * i;
   }

   //Exibe o resultado
   printf("O fatorial de %d é %d\n", numero, fatorial);

  return 0;
}