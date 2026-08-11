#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Iniciando o programa..." << std::endl;
    
    std::cout << "Ocorreu um erro!" << std::endl;
    
    std::abort(); 
    
    std::cout << "Voce nao irá ver isso" << std::endl;
    
    return 0;
}