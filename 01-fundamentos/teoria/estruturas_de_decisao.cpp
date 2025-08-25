#include <iostream>
using namespace std;

int main()
{
    /*
        Estrutura de decisão: switch / case / default / break

        É comum usar estruturas condicionais como if, else if e else. Entretanto,
        quando os casos são conhecidos e não há necessidade de utilizar estruturas
        condicionais para obter um valor lógico, é preferível utilizar o switch/case, 
        que em tradução livre significa "escolha/caso".

        Considerando que, em uma expressão, obteve-se o valor 1 (também é possível usar char), 
        o programa executará a ação correspondente a 1.

        A sintaxe básica é:

        switch (expressão)
        {
            case valor_da_expressão:
                // Código a ser executado para o respectivo valor
                break;
            ...
            default:
                // Código a ser executado se nenhum dos casos acima corresponder
        }

        O break serve para interromper a execução do switch após a execução do código do case correspondente.
        Caso não seja usado, o programa continuará executando os próximos cases (efeito chamado de "fall-through").
    */

    int decisao;

    cout << "Informe uma ação da lista:" << endl
         << "1 - Ação 01" << endl
         << "2 - Ação 02" << endl
         << "3 - Ação 03" << endl
         << "4 - Ação 04" << endl;

    cout << "Decisão: ";
    cin >> decisao;

    switch (decisao) // Expressão
    {
    case 1:
        // Código para a Ação 01
        cout << "Ação 01" << endl;
        break;
    case 2:
        // Código para a Ação 02
        cout << "Ação 02" << endl;
        break;
    case 3:
        // Código para a Ação 03
        cout << "Ação 03" << endl;
        break;
    case 4:
        // Código para a Ação 04
        cout << "Ação 04" << endl;
        break;
    default:
        // Ação padrão
        /*
            Se, por exemplo, o usuário informar uma ação 5,
            o case que será executado será o default. Os cases
            acima são casos "especiais", que correspondem às
            escolhas previstas pelo programa.
        */
        cout << "Ação padrão" << endl;
        break;
    }

    // Exemplo com char
    char letra;
    cout << "\nInforme uma letra (a, b, c): ";
    cin >> letra;

    switch (letra)
    {
    case 'a':
        cout << "Você escolheu a letra a!" << endl;
        break;
    case 'b':
        cout << "Você escolheu a letra b!" << endl;
        break;
    case 'c':
        cout << "Você escolheu a letra c!" << endl;
        break;
    default:
        cout << "Letra não reconhecida." << endl;
        break;
    }

    return 0;
}