#include <iostream>

using namespace std;

int main() {
    double nota1, nota2, nota3, media;

    cout << "Digite a nota 1: ";
    cin >> nota1;
    
    cout << "Digite a nota 2: ";
    cin >> nota2;
    
    cout << "Digite a nota 3: ";
    cin >> nota3;

    // Calcular a média
    media = (nota1 + nota2 + nota3) / 3;

    cout << "A media do aluno eh: " << media << endl;

    // Classificar o desempenho
    if (media >= 60) {
        cout << "Aluno foi Aprovado" << endl;
    } else if (media == 59) {
        cout << "Aluno em recupeção" << endl;    
    } else {
        cout << "Aluno foi Reprovado" << endl;
    }

    return 0;
}

