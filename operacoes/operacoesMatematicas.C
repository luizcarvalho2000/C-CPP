#include <stdio.h>
#include <locale.h>

int main()
{
    // setlocale serve para suportar UTF-8( depois de terminar o codigo digite 
    // CRTL+Shift+P - Change File Encoding - Save Witch Encoding - Wetern Iso 8859-1)
    setlocale(LC_ALL, "");
    double num1, num2;
    double soma, subtracao, multiplicacao, divisao;

    // Leitura dos dois numeros

    printf("Digite o primeiro n�mero:\n ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero:\n ");
    scanf("%lf", &num2);

    // Calculos
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    // Exibição dos resultados
    printf("Soma: %.2lf\n", soma);
    printf("Subtra��o:. %.2lf\n", subtracao);
    printf("Multiplica��o: %.2lf\n", multiplicacao);
    printf("Divis�o: %.2lf\n", divisao);

    return 0;
}
