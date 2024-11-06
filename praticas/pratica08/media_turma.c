#include <stdio.h>

int main() {
  float notas[10]; // Declare uma matriz de ponto flutuante para armazenar as notas
  float soma = 0.0f, media; // Variáveis para soma das notas e média da turma
  int qtde_acima_media = 0; // Variável para contar quantos alunos estão acima da média

   // Loop para ler as notas dos 10 alunos
    for(int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        // Soma as notas para cálculo da média
        soma += notas[i];
    }

     // Calcula a média da turma
     media = soma / 10;

     // Loop para contar quantos alunos estão acima da média
     for(int i = 0; i < 10; i++) {
        if(notas[i] > media) {
            qtde_acima_media++;
        }
     }

      // Imprime a média da turma e a quantidade de alunos acima da média
      printf("Media da turma: %.2f\n", media);
      printf("Quantidade de alunos acima da media: %d\n", qtde_acima_media);

    return 0;
}