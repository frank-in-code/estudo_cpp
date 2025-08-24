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

    cout << endl << endl;

    // Usando bool
    bool x = true;
    bool y = false;

    // Usando '||' (OU): só é falso se as duas proposições forem falsas
    cout << (x || y) << endl; // true || false → true
    cout << (x || x) << endl; // true || true  → true
    cout << (y || x) << endl; // false || true → true
    cout << (y || y) << endl; // false || false → false

    // Usando '&&' (E): só é verdadeiro se ambas forem verdadeiras
    cout << (x && y) << endl; // true && false → false
    cout << (x && x) << endl; // true && true  → true
    cout << (y && x) << endl; // false && true → false
    cout << (y && y) << endl; // false && false → false

    return 0;
}