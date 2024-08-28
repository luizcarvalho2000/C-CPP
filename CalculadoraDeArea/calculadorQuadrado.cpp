#include <stdio.h>

int lado, area;

int main()
{
    printf("Insira o lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado; // Cálculo da área do quadrado

    printf("A área é: %d \n", area);

    return 0;
}
