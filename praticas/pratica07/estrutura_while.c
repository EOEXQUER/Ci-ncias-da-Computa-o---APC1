#include <stdio.h>

int main() {
    int nota;

    //Lê valor inicial para variável nota
    printf("Digite uma nota entre 1 a 10: ");
    scanf("%i", &nota);

    //Loop para garantir que a nota esteja entre 1 e 10
    while(nota < 1 || nota > 10) {
        printf("Nota invalida. Tente novamente!\n");
        scanf("%i", &nota);
    }

    printf("Nota valida: %i\n", nota);

  return 0;
}