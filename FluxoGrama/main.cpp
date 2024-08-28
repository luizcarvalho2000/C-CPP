#include <iostream>   // Inclui a biblioteca padrão de entrada/saída (cin, cout).
#include <cmath>      // Inclui a biblioteca para funções matemáticas (pow).

using namespace std;  // Permite usar nomes do namespace std (cout, cin, pow) sem o prefixo "std::".

int main() {          // Função principal do programa (ponto de entrada).
    double P1, P2, MEX1, MEX2, M1, M2, MF;  // Declara variáveis de ponto flutuante para armazenar as notas.

    cout << "Digite os valores de P1 : ";  // Exibe mensagem solicitando a nota P1.
    cin >> P1;                             // Lê a nota P1 digitada pelo usuário.

    cout << "Digite os valores de P2 : ";  // Exibe mensagem solicitando a nota P2.
    cin >> P2;                             // Lê a nota P2 digitada pelo usuário.

    cout << "Digite os valores de MEX1 : "; // Exibe mensagem solicitando a nota MEX1.
    cin >> MEX1;                            // Lê a nota MEX1 digitada pelo usuário.

    cout << "Digite os valores de MEC2 : "; // Exibe mensagem solicitando a nota MEX2 (corrigido o erro de digitação).
    cin >> MEX2;                            // Lê a nota MEX2 digitada pelo usuário.

    // Calcular M1
    M1 = (P1 * 0.90) + (MEX1 * 0.10);       // Calcula a média ponderada M1 (90% P1, 10% MEX1).

    // Calcular M2
    M2 = (P2 * 0.90) + (MEX2 * 0.10);       // Calcula a média ponderada M2 (90% P2, 10% MEX2).

    // Calcular MF
    MF = pow(M1 + (2 * M2), 1.0/3.0);       // Calcula a média final MF como a raiz cúbica da soma ponderada de M1 e M2.

    cout << "O valor de M1 eh: " << M1 << endl;   // Exibe o valor de M1.
    cout << "O valor de M2 eh: " << M2 << endl;   // Exibe o valor de M2.
    cout << "O valor de MF eh: " << MF << endl;   // Exibe o valor de MF.

    return 0;                                // Indica que o programa terminou com sucesso.
}

