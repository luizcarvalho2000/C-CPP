#include <stdio.h>
#include <math.h>
#include <locale.h>

// Funções para cada operação
double soma(double x, double y)
{
    return x + y;
}

double subtracao(double x, double y)
{
    return x - y;
}

double multiplicacao(double x, double y)
{
    return x * y;
}

double divisao(double x, double y)
{
    if (y != 0)
    {
        return x / y;
    }
    else
    {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

double potencia(double base, double expoente)
{
    return pow(base, expoente);
}

double raizQuadrada(double x)
{
    if (x >= 0)
    {
        return sqrt(x);
    }
    else
    {
        printf("Erro: Raiz quadrada de número negativo!\n");
        return 0;
    }
}

double potenciaXYmaisY(double x, double y)
{
    return pow(x + y, y);
}

// Função principal
int main()
{
    setlocale(LC_ALL, "");
    double x, y, resultado;
    char operacao;
    int repeticoes = 4;

    for (int i = 0; i < repeticoes; i++)
    {
        // Leitura dos valores
        printf("Digite o primeiro valor: ");
        scanf("%lf", &x);
        printf("Digite o segundo valor: ");
        scanf("%lf", &y);

        // Solicitar a operação
        printf("Escolha a operação (+, -, *, /, '^', '@', '#', 's', '%%'): ");
        scanf(" %c", &operacao);

        // Processar a operação escolhida
        switch (operacao)
        {
        case '+':
            resultado = soma(x, y);
            break;
        case '-':
            resultado = subtracao(x, y);
            break;
        case '*':
            resultado = multiplicacao(x, y);
            break;
        case '/':
            resultado = divisao(x, y);
            break;
        case '^':
            resultado = potencia(x, y);
            break;
        case '@':
            resultado = potencia(x, 2); // x^2
            break;
        case '#':
            resultado = potencia(x, 3); // x^3
            break;
        case 's':
            resultado = raizQuadrada(x);
            break;
        case '%':
            resultado = potenciaXYmaisY(x, y);
            break;
        default:
            printf("Erro: Operação inválida!\n");
            continue;
        }

        // Exibição do resultado
        printf("Resultado: %.2lf\n", resultado);
    }

    return 0;
}
