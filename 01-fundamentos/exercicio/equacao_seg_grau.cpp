#include <iostream>
#include <cmath> // biblioteca com a função de tirar raiz quadrada
#include <iomanip> // biblioteca com a função de cortar casas decimais
using namespace std;

int main()
{
    double a, b, c;
    double delta;
    double x1, x2;

    cout << "---------------------------" << endl;
    cout << "* Equação do segundo grau *" << endl;
    cout << "---------------------------" << endl;

    cout << "formato: ax² + bx + c = 0" << endl;
    cout << "lembre-se: a não pode ser 0" << endl;
    cout << "---------------------------" << endl;

    cout << "a = ";
    cin >> a;

    if (a == 0)
    {
        cout << "a tem que ser diferente de zero" << "\n"
             << "informe outro coeficiente a = ";
        cin >> a;
    }

    if (a == 0) {
        cout << "Erro: 'a' não pode ser zero, a equação não é do 2º grau." << endl;
        return 0;
    }


    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    delta = b*b-4*a*c;

    cout << "---------------------------" << endl;

    cout << "Equação dada: (" << a << ")x² + (" << b << ")x + (" << c << ") = 0" << endl; 

    cout << "Delta = " << delta << " (b² - 4ac)" << endl;

    if (delta > 0)
    {
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout << "x1 = " << fixed << setprecision(3) << x1 << endl;
        cout << "x2 = " << fixed << setprecision(3) << x2 << endl;
    } else if (delta == 0)
    {
        x1 = (-b)/(2*a);
        cout << "x = " << fixed << setprecision(3) << x1 << endl;
    } else 
    {
        cout << "Com delta negativo não há raízes reais!" << endl;
        cout << "Fim do programa..." << endl;
        return 0;
    }

    return 0;
}