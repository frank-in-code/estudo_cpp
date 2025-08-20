#include <iostream>
using namespace std;
//using namespace std; informa ao compilador que as definições como 'cout' e 'endl' estão
//na biblioteca std, com isso, não há necessidade de colocar 'std::' pois o compilador
// já sabe onde 'cout' está

int main() {
    //saida: cout
    //entrada:: cin

    int idade; 
    //É uma variável do tipo int, usada para armazenar na memória ram 
    //uma número inteiro: não tem casas decimais, pode ser positivo ou
    //negativo. Tem um limite, não é possível colocar números tão grandes

    cout << "Olá!" << endl;
    cout << "Quantos anos você tem?" << endl;
    cout << "Idade: ";
    
    //cin é a entrada, o que for escrito pelo usuário será atribuido a 
    //variável 'idade'
    cin >> idade;

    cout << "Então você tem " << idade << " anos!" << endl; //há como mostrar variáveis no cout também!
    
    return 0;
}