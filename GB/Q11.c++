#include <iostream>

#define MENSAGEM "Oi, tudo bem!"
#define DEBUG

int main() {

    std::cout << MENSAGEM << std::endl;

#ifdef DEBUG
    std::cout << "Modo DEBUG ativado." << std::endl;
#else
    std::cout << "Modo DEBUG desativado." << std::endl;
#endif

    return 0;
}