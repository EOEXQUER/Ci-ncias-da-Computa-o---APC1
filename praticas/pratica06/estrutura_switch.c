#include <stdio.h> 

int main() { 
   int nota;

   //Solicita a nota ao usuário
   printf("Insira uma nota de 1 a 5: ");
   scanf("%d", &nota);

   //Estrutura switch para verificar a nota
   switch(nota) {
    case 1:
    printf("Voce ganhou '*'.\n");
    case 2:
    printf("Voce ganhou '**'.\n");
    case 3:
    printf("Voce ganhou '***'.\n");
    case 4:
    printf("Voce ganhou '****'.\n");
    case 5:
    printf("Voce ganhou '*****'.\n");
    break;
    default:
    printf("Nota invalida! Tente novamente.\n");
    break;

   }

    return 0;
}