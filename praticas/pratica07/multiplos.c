#include <stdio.h>

int main() {
   int numero;

   //Solicita ao usuário que insira um número
   printf("Digite um numero: ");
   scanf("%d", &numero);

   //Loop de 1 a 100 para encontrar múltiplos de 'numero'
   for(int i=1; i < 101; i++) {
    //Verificar se i é múltiplo de 'numero'
    if(i % numero == 0) {
        printf("%d,", i);
    }
   }

    printf("\n"); //Para finalizar a linha de saída
    return 0;
}