#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 10;

    // Operadores lógicos relacionam duas ou mais proposições
    // '||' → OU (true se pelo menos uma proposição for verdadeira)
    // '&&' → E (true somente se todas as proposições forem verdadeiras)
    // '!'  → Negação (inverte o valor lógico da proposição)

    // Exemplo 1: OU
    cout << (a + b >= 30 || a + b < 30) << endl; 
    // (a+b >= 30) OU (a+b < 30) → sempre verdadeiro (true)

    // Exemplo 2: Negação
    cout << !(a + b < 10) << endl; 
    // !(a+b < 10) → "a+b < 10" é false, negando vira true

    // Exemplo 3: E
    cout << ((a + b == 30) && (a - b <= 10)) << endl; 
    // (a+b == 30) E (a-b <= 10) → ambas verdadeiras → true

    return 0;
}