#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char op;
    int unid;
    double preco = 0;
    string nome;

    cout << "-----------------------------------" << endl
         << "*      Menu do Restaurante        *" << endl
         << "-----------------------------------" << endl << endl;

    cout << "-----------------------------------" << endl
         << "       Escolha seu pedido:         " << endl
         << "h- hamburguer              R$ 14.50" << endl
         << "c- cachorro-quente         R$ 11.50" << endl
         << "p- pizza brotinho          R$ 8.00 " << endl
         << "r- refrigerante 250ml      R$ 4.00 " << endl
         << "R- refrigerante 500ml      R$ 6.50 " << endl
         << "n- não pedir nada...               " << endl
         << "-----------------------------------" << endl;

    cout << "Opção desejada: "; cin >> op;

    if (op == 'n')
    {
        cout << "Tudo bem, volte sempre!" << endl;
        return 0;
    }

    while (op != 'h' && op != 'c' && op != 'p' && op != 'r'&& op != 'R')
    {
        cout << "Informe uma opção listada: "; cin >> op;
    }

    cout << "Quantidade: "; cin >> unid;

    while (unid <= 0)
    {
        cout << "Informe uma quantidade positiva: "; cin >> unid;
    }

    cout << endl 
         << "-----------------------------------" << endl
         << "*      Pedido do Cliente          *" << endl
         << "-----------------------------------" << endl << endl;

    switch (op) 
    {
        case 'h': preco = 14.5; nome = "hamburguer"; break;
        case 'c': preco = 11.5; nome = "cachorro-quente"; break;
        case 'p': preco = 8.0;  nome = "pizza brotinho"; break;
        case 'r': preco = 4.0;  nome = "refrigerante 250ml"; break;
        case 'R': preco = 6.5;  nome = "refrigerante 500ml"; break;
    }

    cout << unid << "x " << nome << "    R$ = " << fixed << setprecision(2) << preco * unid << endl;


    return 0;
}