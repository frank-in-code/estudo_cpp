#include <iostream>
using namespace std;

int main() {

    double a, b;

    cout << "-------------------------" << "\n"
         << "*   Operações básicas   *" << "\n"
         << "-------------------------" << "\n";
    cout << "Primeiro número(a): ";
    cin >> a;
    cout << "Segundo número(b): ";
    cin >> b;

    cout << "-------------------------" << endl;

    cout << "Soma = " << a + b << endl;
    cout << "Diferença = " << a - b << endl;
    cout << "Produto = " << a * b << endl;
    cout << "Quociente = " << a / b << endl;
    return 0;
}