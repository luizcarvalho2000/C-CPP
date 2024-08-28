#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i;

    do
    {
        std::cout << "\nDigite um número do sabor:\n";
        std::cout << "\t(1) Flocos\n";
        std::cout << "\t(2) Morango\n";
        std::cout << "\t(3) Chocolate\n";

        std::cin >> i;

        if (i < 1 || i > 3)
        {
            std::cout << "Número inválido. Tente novamente.\n";
        }
    } while (i < 1 || i > 3);

    switch (i)
    {
    case 1:
        std::cout << "Você escolheu flocos.\n";
        break;

    case 2:
        std::cout << "Você escolheu morango.\n";
        break;

    case 3:
        std::cout << "Você escolheu chocolate.\n";
        break;
    }

    return 0;
}
