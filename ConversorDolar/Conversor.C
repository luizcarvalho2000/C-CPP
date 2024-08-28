#include <stdio.h>
#include <locale.h> 

int main()
{
   // setlocale serve para suportar UTF-8( depois de terminar o codigo digite 
    // CRTL+Shift+P - Change File Encoding - Save Witch Encoding - Wetern Iso 8859-1)
    setlocale(LC_ALL, "Portuguese");
    double reais, dolares;
    const double cotacao = 5.72;

    // Leitura do valor em reais
    printf("Digite o valor em reais: ");
    scanf("%lf", &reais);

    // Conversão de reais para dólares
    dolares = reais / cotacao;

    // Exibição do resultado
    printf("Valor em dólares: %.2lf\n", dolares);

    return 0;
}
