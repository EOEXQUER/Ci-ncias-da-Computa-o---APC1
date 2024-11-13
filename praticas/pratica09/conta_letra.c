#include <stdio.h>
#include <string.h>

int main() {

 char frase[31];  // Declaração da variável para armazenar a frase
 char letra;     // Declaração da variável para armazenar a letra
 int quantidade = 0;  // Inicializa a variável para contar as ocorrências da letras

 // Leitura da frase
 printf("Digite uma frase (max 30 caracteres): ");
 scanf("%[^\n]", frase); // Lê a frase incluindo espaços

 // Leitura da letra
 printf("Digite a letra que deseja contar: ");
 scanf("%c", &letra);

 // Loop para contar as ocorrências da letra na frase
 for(int i = 0; i < strlen(frase); i++) {
    if(frase[i] == letra) {
        quantidade++;
    }
 }

// Exibe o resultado
if (quantidade > 0) {
    printf("A letra '%c' aparece %d vez(es) na frase.\n", letra, quantidade);
 } else {
    printf("A frase nao contem a letra '%c'.\n", letra);
}

  return 0;
}