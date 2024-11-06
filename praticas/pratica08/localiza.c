#include <stdio.h>

int main() {
  int numeros[10]; // Declara uma matriz unidimensional com 10 posições
  int numero, achou = -1; // Variável para o número a ser localizado e indicador de posição

  // Loop para preencher a matriz com 10 números informados pelo usuário
   for (int i = 0; i < 10; i++) {
     printf("Digite o numero para a posicao %d: ", i);
     scanf("%d", &numeros[i]);
   }

   // Solicita ao usuário o número qu deseja localizar na matriz
   printf("Digite o numero que deseja localizar: ");
   scanf("%d", &numero);

   // Loop para verificar se o número informado está na matriz
   for(int i = 0; i < 10; i++) {
    if(numeros[i] == numero) {
        achou = i; // Atribui a posição onde o número foi encontrado
        break; // Interrompe o loop ao encontrar o número
    }
   }

   // Verifica se o número foi encontrado e exibe a mensagem apropriada
   if(achou == -1) {
    printf("O numero nao foi encontrado!\n");
   } else {
    printf("O numero foi encontrado na posicao %d\n", achou);
   }

    return 0;
}