#include <stdio.h>

int main () {
    int numero, maior, menor;

    //Solicita 'maior' e 'menor' com o primeiro número
    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    //Inicializa 'maior' e 'menor' com o primeiro número inserido
    maior = numero;
    menor = numero;
    
    //Loop para ler os números enquanto 'numero' não for zero
    while(numero != 0) {
        //Atualiza o valor de 'maior' se 'numero' for maior
        if(numero > maior) {
            maior = numero;
        }

        //Atualiza o valor de 'menor' se 'numero' for menor
        if(numero < menor) {
            menor = numero;
        }

        //Solicita o próximo número
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    //Exibe o maior e o menor número inserido
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

  return 0;
}