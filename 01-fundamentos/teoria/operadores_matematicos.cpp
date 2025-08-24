#include <iostream>
using namespace std;

// Variáveis globais (inteiros)
int a = 30;
int b = 7;

int main() {
    // Operações com inteiros (int)
    cout << "=== Operações com int ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Adição: a + b = " << a + b << endl;
    cout << "Subtração: a - b = " << a - b << endl;
    cout << "Multiplicação: a * b = " << a * b << endl;
    cout << "Divisão inteira: a / b = " << a / b << endl;
    cout << "Resto da divisão: a % b = " << a % b << endl;

    cout << "-------------------------" << endl;

    // Operações com reais (double)
    double x = 30;
    double y = 7;

    cout << "=== Operações com double ===" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "Adição: x + y = " << x + y << endl;
    cout << "Subtração: x - y = " << x - y << endl;
    cout << "Multiplicação: x * y = " << x * y << endl;
    cout << "Divisão real: x / y = " << x / y << endl;

    cout << "-------------------------" << endl;

    // Operadores compostos
    cout << "Exemplo de operadores compostos:" << endl;
    cout << "a += b -> a = " << (a += b) << endl;
    cout << "a -= b -> a = " << (a -= b) << endl;
    cout << "a *= b -> a = " << (a *= b) << endl;
    cout << "a /= b -> a = " << (a /= b) << endl;

    return 0;
}