#include <iostream>

int main(int argc, char **argv)
{
    int contador;

    std::cout << "Digite um valor: ";
    std::cin >> contador;

    for (; contador >= 1; contador--)
    {
        std::cout << contador << " ";
    }

    std::cout << std::endl;

    return 0;
}
