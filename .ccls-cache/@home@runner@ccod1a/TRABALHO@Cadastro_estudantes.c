#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTUDANTES 100
#define TAM_NOME 50

typedef struct {
    long long int id; 
    char nome[TAM_NOME];
    int idade;
    float nota;
} Estudante;

int main() {
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de long: %zu bytes\n", sizeof(long));
    printf("Tamanho de long long: %zu bytes\n", sizeof(long long));
    printf("Tamanho de int64_t: %zu bytes\n", sizeof(int64_t));

    Estudante estudantes[MAX_ESTUDANTES];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n==== Sistema de Cadastro de Estudantes ====\n");
        printf("1. Adicionar novo estudante\n");
        printf("2. Visualizar todos os estudantes\n");
        printf("3. Modificar um estudante\n");
        printf("4. Excluir um estudante\n");
        printf("5. Sair\n");
        printf("Selecione uma opção (1-5): ");

        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Por favor, insira um número entre 1 e 5.\n");
            continue;
        }

        switch(opcao) {
            case 1:
                if (quantidade >= MAX_ESTUDANTES) {
                    printf("Lista de estudantes cheia. Não é possível adicionar mais estudantes.\n");
                } else {
                    long long int id;
                    int duplicado = 0;
                    printf("Digite o ID: ");
                    if (scanf("%lld", &id) != 1) {
                        while (getchar() != '\n');
                        printf("ID inválido. Por favor, insira um número inteiro.\n");
                        break;
                    }
                    for (int i = 0; i < quantidade; i++) {
                        if (estudantes[i].id == id) {
                            duplicado = 1;
                            break;
                        }
                    }
                    if (duplicado) {
                        printf("Já existe um estudante com este ID.\n");
                        break;
                    }
                    estudantes[quantidade].id = id;

                    printf("Digite o Nome: ");
                    while (getchar() != '\n');
                    if (fgets(estudantes[quantidade].nome, TAM_NOME, stdin) == NULL) {
                        printf("Erro ao ler o nome.\n");
                        continue;
                    }
                    estudantes[quantidade].nome[strcspn(estudantes[quantidade].nome, "\n")] = '\0';

                    printf("Digite a Idade: ");
                    if (scanf("%d", &estudantes[quantidade].idade) != 1) {
                        while (getchar() != '\n');
                        printf("Idade inválida. Por favor, insira um número inteiro.\n");
                        break;
                    }

                    printf("Digite a Nota: ");
                    if (scanf("%f", &estudantes[quantidade].nota) != 1) {
                        while (getchar() != '\n');
                        printf("Nota inválida. Por favor, insira um número decimal.\n");
                        break;
                    }

                    quantidade++;
                    printf("Estudante adicionado com sucesso.\n");
                }
                break;
            case 2:
                if (quantidade == 0) {
                    printf("Nenhum estudante cadastrado.\n");
                } else {
                    printf("\n=== Lista de Estudantes ===\n");
                    for (int i = 0; i < quantidade; i++) {
                        printf("Estudante %d:\n", i+1);
                        printf("ID: %lld\n", estudantes[i].id);
                        printf("Nome: %s\n", estudantes[i].nome);
                        printf("Idade: %d\n", estudantes[i].idade);
                        printf("Nota: %.2f\n", estudantes[i].nota);
                        printf("--------------------------\n");
                    }
                }
                break;
            case 3:
                if (quantidade == 0) {
                    printf("Nenhum estudante cadastrado para modificar.\n");
                } else {
                    long long int id;
                    int encontrado = -1;
                    printf("Digite o ID do estudante a ser modificado: ");
                    if (scanf("%lld", &id) != 1) {
                        while (getchar() != '\n');
                        printf("ID inválido. Por favor, insira um número inteiro.\n");
                        break;
                    }
                    for (int i = 0; i < quantidade; i++) {
                        if (estudantes[i].id == id) {
                            encontrado = i;
                            break;
                        }
                    }
                    if (encontrado == -1) {
                        printf("Estudante com ID %lld não encontrado.\n", id);
                    } else {
                        printf("Digite o novo Nome (atual: %s): ", estudantes[encontrado].nome);
                        while (getchar() != '\n');
                        if (fgets(estudantes[encontrado].nome, TAM_NOME, stdin) == NULL) {
                            printf("Erro ao ler o nome.\n");
                            continue;
                        }
                        estudantes[encontrado].nome[strcspn(estudantes[encontrado].nome, "\n")] = '\0';

                        printf("Digite a nova Idade (atual: %d): ", estudantes[encontrado].idade);
                        if (scanf("%d", &estudantes[encontrado].idade) != 1) {
                            while (getchar() != '\n');
                            printf("Idade inválida. Por favor, insira um número inteiro.\n");
                            break;
                        }

                        printf("Digite a nova Nota (atual: %.2f): ", estudantes[encontrado].nota);
                        if (scanf("%f", &estudantes[encontrado].nota) != 1) {
                            while (getchar() != '\n');
                            printf("Nota inválida. Por favor, insira um número decimal.\n");
                            break;
                        }

                        printf("Estudante modificado com sucesso.\n");
                    }
                }
                break;
            case 4:
                if (quantidade == 0) {
                    printf("Nenhum estudante cadastrado para excluir.\n");
                } else {
                    long long int id;
                    int encontrado = -1;
                    printf("Digite o ID do estudante a ser excluído: ");
                    if (scanf("%lld", &id) != 1) {
                        while (getchar() != '\n');
                        printf("ID inválido. Por favor, insira um número inteiro.\n");
                        break;
                    }
                    for (int i = 0; i < quantidade; i++) {
                        if (estudantes[i].id == id) {
                            encontrado = i;
                            break;
                        }
                    }
                    if (encontrado == -1) {
                        printf("Estudante com ID %lld não encontrado.\n", id);
                    } else {
                        for (int i = encontrado; i < quantidade - 1; i++) {
                            estudantes[i] = estudantes[i+1];
                        }
                        quantidade--;
                        printf("Estudante excluído com sucesso.\n");
                    }
                }
                break;
            case 5:
                printf("Saindo do programa. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Por favor, selecione um número entre 1 e 5.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}

