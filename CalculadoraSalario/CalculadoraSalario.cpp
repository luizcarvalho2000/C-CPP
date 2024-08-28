#include <iostream>

int main(int argc, char **argv)
{
    float salario, inss, ir, sal_liquido;

    // Leitura do salário bruto
    std::cout << "Digite seu salario bruto: \n";
    std::cin >> salario;

    // Cálculo do desconto do INSS
    if (salario <= 1693.72) {
        inss = salario * 0.08;
    } else if (salario >= 1693.73 && salario <= 2822.90) {
        inss = salario * 0.09;
    } else {
        // Considerando uma alíquota maior para salários acima de 2822.90
        inss = salario * 0.11;  // Alíquota de 11% para salários acima de 2822.90
    }

    // Cálculo do imposto de renda
    // Para simplificação, assumiremos uma faixa de imposto fixo de 15% para salários maiores
    if (salario > 2822.90) {
        ir = (salario - 2822.90) * 0.15; // 15% de imposto sobre o valor acima de 2822.90
    } else {
        ir = 0.0;
    }

    // Cálculo do salário líquido
    sal_liquido = salario - inss - ir;

    // Impressão dos resultados
    std::cout << "\nDesconto INSS: " << inss << "\n";
    std::cout << "Desconto IR: " << ir << "\n";
    std::cout << "Salario liquido: " << sal_liquido << "\n";

    return 0;
}
