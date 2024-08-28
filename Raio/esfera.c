#include <stdio.h>
#include <math.h>
#include <locale.h> 

int main()
{
    // setlocale serve para suportar UTF-8( depois de terminar o codigo digite 
    // CRTL+Shift+P - Change File Encoding - Save Witch Encoding - Wetern Iso 8859-1)
    setlocale(LC_ALL, "Portuguese");
    double R, volume, area;
    const double PI = 3.141592653589793;

    // Leitura do raio da esfera
    printf("Digite o raio da esfera: ");
    scanf("%lf", &R);

    // Cálculo do volume da esfera
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    // Cálculo da área da esfera
    area = 4 * PI * pow(R, 2);

    // Exibição dos resultados
    printf("Volume da esfera: %.2lf\n", volume);
    printf("Area da esfera: %.2lf\n", area);

    return 0;
}
