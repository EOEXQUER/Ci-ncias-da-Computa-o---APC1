#include <stdio.h>
#include <string.h>

int main() {

char palavra1[11]; // Declaração da variável para armazenar a primeira palavra
char palavra2[11]; // Declaração da variável para armazenar a segunda palavra

// Leitura das palavras
printf("Digite a primeira palavra: ");
scanf("%s", palavra1);

printf("Digite a segunda palavra: ");
scanf("%s", palavra2);

// Verifica a ordem alfabética usando strcmp()
if (strcmp(palavra1, palavra2) >=0) {
    // Se palavra1 for maior ou igual a palavra2, imprime palavra2 primeiro
    printf("Ordem alfabetica: %s, %s\n", palavra2, palavra1);
} else {
 // Caso contrário, imprime palavra1 primeiro
 printf("Ordem alfabetica: %s, %s\n", palavra1, palavra2);
 }

    return 0;
}