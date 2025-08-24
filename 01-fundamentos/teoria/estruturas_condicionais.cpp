#include <iostream>
using namespace std;

// Estruturas condicionais: if, else, if else.
/*
    IF: Se um valor lógico for true, então o que estiver dentro do bloco if será executado.
    ELSE: Executa quando a condição do IF é falsa.
*/

int main()
{
    int a = 20;
    int b = 10;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    if (a > b) // Se 'a' for maior que 'b', este bloco será executado
    {
        cout << "a é maior que b" << endl;
    }
    else // Caso contrário, este bloco será executado
    {
        cout << "a é menor ou igual a b" << endl;
    }

    return 0;
}