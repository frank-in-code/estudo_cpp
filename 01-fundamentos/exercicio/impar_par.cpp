#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Informe um número: "; 
    cin >> n;

    if (n < 0)
    {
        cout << "o número não pode ser negativo!" << "\n"
             << "Tente com outro número: ";
        cin >> n;
    }

    if (n % 2 == 0)
    {
        cout << "Seu número é par!" << endl;
    } else 
    {
        cout << "Seu número é impar!" << endl;
    }

    return 0;
}