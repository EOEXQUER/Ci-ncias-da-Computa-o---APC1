#include <stdio.h>

int main() {
 int ano;

 //Solicita o ano ao usuário
 printf("Insira o ano: ");
 scanf("%d", &ano);

 //Verificar se o ano é bissexto
 if((ano %4 == 0 && ano % 100 != 0)|| (ano % 400 == 0)) {
    printf("O ano %d e bissexto.\n", ano);
 }else{
    printf("O ano %d nao e bissexto\n",ano);
 }

    return 0;
}
