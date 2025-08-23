#include <iostream>
using namespace std;

int main() {
    /*
        Incrementação e Decrementação
        -----------------------------
        Usamos para alterar o valor de variáveis em +1 ou -1.
        Muito comum em estruturas de repetição (for, while).
    */

    int i = 0;
    int c = 10;

    // INCREMENTAÇÃO

    cout << "Valor inicial de c: " << c << endl;

    // forma tradicional
    c = c + 1;
    cout << "Depois de c = c + 1: " << c << endl;

    // forma compacta
    c += 1;
    cout << "Depois de c += 1: " << c << endl;

    c++;
    cout << "Depois de c++ (pos-fixo): " << c << endl;

    ++c;
    cout << "Depois de ++c (prefixo): " << c << endl;

    cout << "-----------------------------" << endl;

    // DECREMENTAÇÃO

    cout << "Valor inicial de i: " << i << endl;

    // forma tradicional
    i = i - 1;
    cout << "Depois de i = i - 1: " << i << endl;

    // forma compacta
    i -= 1;
    cout << "Depois de i -= 1: " << i << endl;

    i--;
    cout << "Depois de i-- (pos-fixo): " << i << endl;

    --i;
    cout << "Depois de --i (prefixo): " << i << endl;

    cout << "-----------------------------" << endl;

    // DIFERENÇA ENTRE PREFIXO E PÓS-FIXO
    int x = 5;
    cout << "x inicial: " << x << endl;
    cout << "Resultado de ++x: " << ++x << " (incrementa antes de usar)" << endl;
    cout << "Resultado de x++: " << x++ << " (usa antes, incrementa depois)" << endl;
    cout << "Valor final de x: " << x << endl;

    return 0;
}