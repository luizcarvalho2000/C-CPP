#include <stdio.h>
#include <locale.h>

int main()
{

    // setlocale serve para suportar UTF-8( depois de terminar o codigo digite
    // CRTL+Shift+P - Change File Encoding - Save Witch Encoding - Wetern Iso 8859-1, 
    //isto serve para aparecer os caracteres no console)
    setlocale(LC_ALL, "Portuguese");

    double quilometragem, combustivelGasolina, combustivelEtanol;
    const double consumoGasolina = 14.0; // km por litro
    const double consumoEtanol = 9.0;    // km por litro

    // Leitura da quilometragem desejada
    printf("Digite a quilometragem desejada: ");
    scanf("%lf", &quilometragem);

    // Cálculo da quantidade de combustível necessária
    combustivelGasolina = quilometragem / consumoGasolina;
    combustivelEtanol = quilometragem / consumoEtanol;

    // Exibição dos resultados
    printf("Quantidade de combustível necessária:\n");
    printf("Gasolina: %.2lf litros\n", combustivelGasolina);
    printf("Etanol: %.2lf litros\n", combustivelEtanol);

    return 0;
}
