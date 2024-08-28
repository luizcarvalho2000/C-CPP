#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    char endereco[30];
    int idade;

    // Leitura do nome
    printf("Nome: \n");
    fgets(nome, sizeof(nome), stdin);
    // Remove o caractere de nova linha, se presente
    nome[strcspn(nome, "\n")] = 0;

    // Leitura do endereço
    printf("Endereco: \n");
    fgets(endereco, sizeof(endereco), stdin);
    // Remove o caractere de nova linha, se presente
    endereco[strcspn(endereco, "\n")] = 0;

    // Leitura da idade
    printf("Idade: \n");
    scanf("%d", &idade);

    // Exibição dos dados
    printf("\nNome: %s", nome);
    printf("\nEndereco: %s", endereco);
    printf("\nIdade: %d", idade);

    return 0;
}
