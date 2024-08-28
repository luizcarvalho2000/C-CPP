#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 20

struct tfila {
    int dados[TAMANHO];
    int ini;
    int fim;
};

struct tfila fila;
int op;

// Prototipação
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar();

int main() {
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    fila.ini = 0;
    fila.fim = 0;

    while (op != 0) {
        system("cls");  // Para Windows. Use "clear" para Unix/Linux/Mac
        fila_mostrar();
        menu_mostrar();
        scanf("%d", &op);

        switch (op) {
            case 1:
                fila_entrar();
                break;
            case 2:
                fila_sair();
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
                system("pause");
                break;
        }
    }

    return 0;
}

// Adicionar um elemento no final da Fila
void fila_entrar() {
    if (fila.fim == TAMANHO) {
        printf("\nA fila está cheia, não é possível adicionar mais elementos!\n\n");
    } else {
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }
    system("pause");
}

// Retirar o primeiro elemento da Fila
void fila_sair() {
    if (fila.ini == fila.fim) {
        printf("\nFila vazia!\n\n");
    } else {
        printf("\nElemento removido: %d\n", fila.dados[fila.ini]);
        fila.ini++;
        // Se a fila ficar vazia após a remoção, reinicializar ini e fim
        if (fila.ini == fila.fim) {
            fila.ini = fila.fim = 0;
        }
    }
    system("pause");
}

// Mostrar o conteúdo da Fila
void fila_mostrar() {
    int i;
    printf("[  ");
    for (i = fila.ini; i < fila.fim; i++) {
        printf("%d  ", fila.dados[i]);
    }
    printf("]\n\n");
}

// Mostrar o menu de opções
void menu_mostrar() {
    printf("\nEscolha uma opção:\n");
    printf("1 - Incluir na Fila\n");
    printf("2 - Excluir da Fila\n");
    printf("0 - Sair\n\n");
}
