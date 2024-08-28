#include <iostream>

using namespace std;

int main() {
    double nota1, nota2, nota3, media;
    int resultado; // Variável para armazenar o resultado (aprovado, recuperação, reprovado)

    cout << "Digite a nota 1: ";
    cin >> nota1;

    cout << "Digite a nota 2: ";
    cin >> nota2;

    cout << "Digite a nota 3: ";
    cin >> nota3;

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3;

    // Determinar o resultado
    if (media >= 60) {
        resultado = 1; // Aprovado
    } else if (media == 59) {
        resultado = 2; // Recuperação
    } else {
        resultado = 3; // Reprovado
    }

    cout << "A media do aluno eh: " << media << endl;

    // switch-case
    switch (resultado) {
        case 1:
            cout << "Aluno foi Aprovado" << endl;
            break;
        case 2:
            cout << "Aluno em recuperacao" << endl;
            break;
        case 3:
            cout << "Aluno foi Reprovado" << endl;
            break;
        default:
            cout << "Resultado invalido" << endl; // Caso o resultado não seja nenhum dos anteriores
    }

    return 0;
}

