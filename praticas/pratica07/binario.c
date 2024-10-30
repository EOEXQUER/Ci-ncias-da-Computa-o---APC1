#include <stdio.h>
int main () {
    int numero, decimal;

    //Solicita ao usuário que insira um número decimal
    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    //Inicializa a variável 'decimal' com o valor de 'numero'
    decimal = numero;

    printf("O valor binario de %d e: ", numero);

    //Loop para calcular e exibir cada bit do número em binário
    for(int i = 128; i > 0; i = i / 2) {
        int bit = decimal / i; //Obtém o bit mais significativo
        printf("%d", bit); // Imprime o bit (0 ou 1)

        //Atualiza o valor de 'decimal' removendo o bit atual
        decimal = decimal - bit * i;
    }

    printf("\n"); //Para finalizar a linha de saída
    return 0;
}