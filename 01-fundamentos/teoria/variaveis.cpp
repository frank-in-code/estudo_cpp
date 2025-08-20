#include <iostream>
using namespace std;

int main() {
    /*
        as variaveis sao um recurso poderoso, pois armazenam informacoes
        volateis na memoria ram do computador. As informacoes contidas
        nas variaveis podem ser usadas para diversas coisas e podem mudar
        a qualquer momento.

        as variaveis basicas tem tipos, os tipos primitivos.

        os dados podem estar como numeros pequenos numero inteiros, numeros
        com poucas casas decimais, numeros com muitas casas decimais, caracteres
        valores logicos (true e false) e outros.

        o programa pede ao sistema operacional que ele reserve um espaco
        na memoria ram do computador, para isso ela precisa de um nome

        no c++

        <tipo da variavel> <nome da variavel>;

        ex: 
        int idade; (int é inteiro)
        float peso; (float é ponto flutuante)
        double pi; (double é um float mais preciso)
        bool cliente; (bool é tipo lógico: true ou false (verdadeiro ou falso))
        char letraDoAlfabeto; (char é caractere: simbolo da tablela unicode)
        string nomeCompleto; (string não é um tipo de dado primitivos, mas inicialmente
        vamos considerar) (cadeia de caracteres)
    */

    int idade;
    string nome;
    float peso;

    cout << "Escreva seu nome: ";
    cin >> nome;

    cout << "Informe sua idade: ";
    cin >> idade;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Seu nome é " << nome << ", tem " << idade << " anos e pesa " << peso << "kg" << endl;

    return 0;
}