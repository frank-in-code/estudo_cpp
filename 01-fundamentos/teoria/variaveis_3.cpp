#include <iostream>
#include <string>
using namespace std;

// Variáveis e tipos de dados

int main() {

    /*
        Reforçando:
            <tipo de dado> <nome>;
            Ex: int clientes;

            <tipo de dado> <nome> = <valor inicial>;
            Ex: int alunos = 30;

            O símbolo de igual (=) é usado quando o programador deseja
            atribuir algo. Nesse caso, é atribuído o número 30 à variável alunos.
    */

    // Tipos inteiros
    int a = 50; // inicializa com 50
    int b = -25;
    int soma; // não tem valor inicial
    soma = a + b; // agora a variável é preenchida
    cout << "Soma entre ints: " << soma << endl;

    cout << "------------------------" << endl;

    // Tipos de ponto flutuante
    float x = 0.3;
    float y = 0.1;
    float diferenca;
    diferenca = x - y;
    cout << "Diferença entre floats: " << diferenca << endl;

    cout << "------------------------" << endl;

    // Tipo booleano
    bool cliente; // true(1) = verdadeiro, false(0) = falso
    cliente = false; // não é cliente
    cout << "O cliente está cadastrado? " << endl;
    cout << "Status: " << cliente << endl; // no terminal será 0, pois é falso

    cout << "------------------------" << endl;

    // Tipo string
    string nome; 
    // A string não é um tipo primitivo como int, float, double, char ou bool.
    // Ela é uma classe, mais complexa, com métodos prontos para manipular texto.
    // Internamente, é armazenada como uma sequência de char.
    // Ex: string nome = "Frank"; seria equivalente a:
    // char nome[5]; nome[0] = 'F'; nome[1] = 'r'; ..., nome[4] = 'k';

    nome = "Cristino Ronaldo";
    cout << "Quem é o GOAT? " << endl;
    cout << "GOAT: " << nome << endl;

    cout << "------------------------" << endl;

    return 0;
}