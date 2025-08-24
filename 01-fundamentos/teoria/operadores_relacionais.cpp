#include <iostream>
using namespace std;

int main() {
    // Em C++ e outras linguagens de programação, é comum comparar o valor de duas variáveis
    // usando os operadores relacionais - que tem a função de relacionar esses dois valores
    // e retornar se uma determinada afirmação é falsa ou verdadeira

    // São eles: 
    // == (igual a)
    // != (diferente de)
    // > (maior que)
    // < (menor que)
    // >= (maior ou igual)
    // <= (menor ou igual)

    // Conforme dito anteriormente, eles retornam 0 (false) ou 1 (true)

    int a = 10;
    int b = 2;

    cout << "Usando operadores relacionais!" << endl;
    cout << "Ser for falso: 0 e ser for verdadeiro: 1" << endl << endl;

    // ==
    cout << "10 é igual a 2?" << endl << "-> " << (a == b) << endl;
    // !=
    cout << "10 é diferente de 2?" << endl << "-> " << (a != b) << endl;
    // >
    cout << "10 é maior que 2?" << endl << "-> " << (a > b) << endl;
    // <
    cout << "10 é menor que 2?" << endl << "-> " << (a < b) << endl;
    // >=
    cout << "10 é maior ou igual a 2?" << endl << "-> " << (a >= b) << endl;
    // <=
    cout << "10 é menor ou igual a 2?" << endl << "-> " << (a <= b) << endl;

    return 0;
}