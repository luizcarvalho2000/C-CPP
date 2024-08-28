#include <iostream>   // Inclui a biblioteca padr�o de entrada/sa�da (cin, cout).
#include <cmath>      // Inclui a biblioteca para fun��es matem�ticas (pow).

using namespace std;  // Permite usar nomes do namespace std (cout, cin, pow) sem o prefixo "std::".

int main() {          // Fun��o principal do programa (ponto de entrada).
    double P1, P2, MEX1, MEX2, M1, M2, MF;  // Declara vari�veis de ponto flutuante para armazenar as notas.

    cout << "Digite os valores de P1 : ";  // Exibe mensagem solicitando a nota P1.
    cin >> P1;                             // L� a nota P1 digitada pelo usu�rio.

    cout << "Digite os valores de P2 : ";  // Exibe mensagem solicitando a nota P2.
    cin >> P2;                             // L� a nota P2 digitada pelo usu�rio.

    cout << "Digite os valores de MEX1 : "; // Exibe mensagem solicitando a nota MEX1.
    cin >> MEX1;                            // L� a nota MEX1 digitada pelo usu�rio.

    cout << "Digite os valores de MEC2 : "; // Exibe mensagem solicitando a nota MEX2 (corrigido o erro de digita��o).
    cin >> MEX2;                            // L� a nota MEX2 digitada pelo usu�rio.

    // Calcular M1
    M1 = (P1 * 0.90) + (MEX1 * 0.10);       // Calcula a m�dia ponderada M1 (90% P1, 10% MEX1).

    // Calcular M2
    M2 = (P2 * 0.90) + (MEX2 * 0.10);       // Calcula a m�dia ponderada M2 (90% P2, 10% MEX2).

    // Calcular MF
    MF = pow(M1 + (2 * M2), 1.0/3.0);       // Calcula a m�dia final MF como a raiz c�bica da soma ponderada de M1 e M2.

    cout << "O valor de M1 eh: " << M1 << endl;   // Exibe o valor de M1.
    cout << "O valor de M2 eh: " << M2 << endl;   // Exibe o valor de M2.
    cout << "O valor de MF eh: " << MF << endl;   // Exibe o valor de MF.

    return 0;                                // Indica que o programa terminou com sucesso.
}

