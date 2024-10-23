#include <stdio.h>

int main() {
    int i = 0;
    //Parte 1: Repetição de 0 a 10, incrementando de 1
    printf("Contagem de 0 a 10:\n");
    for(int i = 0; i <= 10; i++) {
        printf("%i", i);
    }
    printf("%i", i);

    //Parte 2: Repetição de 10 a 1, decrementando de 1
    printf("Contagem de 10 a 1:\n");
    for(int i = 10; i>= 1; i--) {
        printf("%i", i);
    }
    printf("\n");

    //Parte 3: Estrutura for com repetição infinita
    //Para testar o loop infinito, comente as partes anteriores
    
    for(;;) {
        printf("Ao infinito e alem!\n");
    }
    

    return 0;
}