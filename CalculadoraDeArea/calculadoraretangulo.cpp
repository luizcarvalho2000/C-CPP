#include <stdio.h>

int lado1, lado2, area;

int main()
{
    printf("Insira o primeiro lado do retângulo: ");
    scanf("%d", &lado1);

    printf("Insira o segundo lado do retângulo: ");
    scanf("%d", &lado2);

    area = lado1 * lado2; // Cálculo da área do retângulo

    printf("A área é: %d \n", area);

    return 0;
}
