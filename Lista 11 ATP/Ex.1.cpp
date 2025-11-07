#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
1. Implemente uma funcao que troca os valores de duas variaveis.
*/

using namespace std;

void trocarValores(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;

}

int main() {
    
    int x = 10;
    int y = 20;

    cout << "Antes da troca: x = " << x << ", y = " << y << endl;

    trocarValores(x, y);

    cout << "Depois da troca: x = " << x << ", y = " << y << endl;

    return 0;
}
