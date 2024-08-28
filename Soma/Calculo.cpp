#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

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
        cout << "Erro: Divisão por zero!" << endl;
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
        cout << "Erro: Raiz quadrada de número negativo!" << endl;
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
        cout << "Digite o primeiro valor: ";
        cin >> x;
        cout << "Digite o segundo valor: ";
        cin >> y;

        // Solicitar a operação
        cout << "Escolha a operação (+, -, *, /, '^', '@', '#', 's', '%'): ";
        cin >> operacao;

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
            cout << "Erro: Operação inválida!" << endl;
            continue;
        }

        // Exibição do resultado
        cout << "Resultado: " << resultado << endl;
    }

    return 0;
}
