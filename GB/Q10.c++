#include <iostream>

int main() {

    int a {0};

    std::cout << "Entre com o valor de a: ";
    std::cin >> a;
    std::cin.get();

    int b {0};

    std::cout << "Entre com o valor de b: ";
    std::cin >> b;
    std::cin.get();

    int soma {0};
    soma = a + b;

    int multiplicacao {0};
    multiplicacao = a * b;

    int divisao {0};
    divisao = a / b;

    std::cout << "Soma = " << soma << '\n';
    std::cout << "Multiplicacao = " << multiplicacao << '\n';
    std::cout << "Divisao = " << divisao << '\n';

    return 0;
}