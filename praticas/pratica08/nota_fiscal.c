#include <stdio.h>

int main() {
    float total = 0.0f;  // Declara e inicializa a variável total para armazenar o valor total da nota
    float nota_fiscal[5][3]; // Declara uma matriz 5x3 para armazenar quantidade, preço e total de cada produto

    // Loop para ler a quantidade e o preço de cada produto e calcular o valor total de cada um
    for(int i = 0; i < 5; i++) {
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%f", &nota_fiscal[i][1]); // Lê o preço

        // Calcula o valor total de cada produto (quantidade * preço)
        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];

        // Soma o valor total de cada produto ao total da nota fiscal
        total += nota_fiscal[i][2];
    }

    printf("\nDetalhes da nota fiscal:\n");

    // Loop para imprimir os detalhes de cada produto na nota fiscal
    for(int i = 0; i < 5; i++) {
        printf("Produto %d - Quantidade: %.2f, Preco: %.2f, Total: %.2f\n", i + 1, nota_fiscal[i][0], nota_fiscal[i][1], nota_fiscal[i][2]);
    }

    // Imprime o valor total da nota fiscal
    printf("\nValor total da nota fiscal: %.2f\n", total);

    return 0;
}