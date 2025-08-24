#include <iostream>
using namespace std;

int main() {
    //variaveis
    double num1, num2;
    double soma = 0;

    //tela inicial
    cout << "--------------------------------" << endl;
    cout << "Calcular a soma de dois números!" << endl;
    cout << "--------------------------------" << endl;
    
    //pedido e atribuição da variavel 1
    cout << "Informe o primeiro número: ";
    cin >> num1;

    //pedido e atribuição da variavel 2
    cout << "Informe o segundo número: ";
    cin >> num2;

    //separação visual
    cout << "--------------------------------" << endl;

    //calcular soma
    soma = num1 + num2;

    //resultado final
    cout << num1 << " + " << num2 << " = " << soma  << endl;

    return 0;
}