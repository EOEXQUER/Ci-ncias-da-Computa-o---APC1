#include <stdio.h>
int main() {
   float valor_bruto, valor_desconto;

   //Solicita o valor bruto ao usuario
   printf("Insira o valor bruto: ");
   scanf("%f", &valor_bruto);

   //Verificar a faixa de desconto com base no valor bruto
   if(valor_bruto <= 100.00f) {
    valor_desconto = valor_bruto * 0.01f;
   } else if (valor_bruto <= 500.00f) {
     valor_desconto = valor_bruto * 0.05f;
   } else {
    valor_desconto = valor_bruto * 0.10f;
   }

   //Exibe o valor bruto e o desconto calculado
   printf("Valor bruto : %2f\n", valor_bruto);
   printf("Valor do desconto : %2f\n", valor_desconto);

  return 0;
}