#include <iostream>
using namespace std;

int main()
{

    int op;
    double n1, n2;

    cout << "------------------" << endl
         << "   Calculadora    " << endl
         << "------------------" << endl;

    cout << "   Escolha a opção" << endl
         << "1- Adição" << endl
         << "2- Subtração" << endl
         << "3- Multiplicação" << endl
         << "4- Divisão" << endl
         << "0- Sair..." << endl;

    cout << "------------------" << endl;

    cout << "Opção desejada: ";

    cin >> op;

    if (op == 0)
    {
        cout << "Saindo do programa..." << endl;
        return 0;
    }

    if (op < 0 || op > 4)
    {
        cout << "Opção não listada" << endl
             << "Informe outra (0-4): ";
        
        cin >> op;
    }

    cout << "------------------" << endl;

    cout << "Escreva o primeiro número: "; cin >> n1;
    cout << "Escreva o segundo número: "; cin >> n2;

    cout << "------------------" << endl;

    if (op == 4 && n2 == 0)
    {
        cout << "Na divisão, o denominador" << endl
             << "não pode ser igual a zero!" << endl << endl
             << "Escreva outro segundo número: ";
        
        cin >> n2;
    }

    if (op == 1)
    {
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    } else if (op == 2)
    {
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    } else if (op == 3)
    {
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    } else
    {
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    }
    return 0;
}