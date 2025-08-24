#include <iostream>
using namespace std;

int main()
{
    /*
        Lembre-se: as estruturas condicionais funcionam como o bool,
        pois só aceitam valores lógicos (true e false). Além disso,
        há como usar varios if's e else's em casos de mais de duas 
        condições. Como:  
    */

    if (true) {
        // Será executado, pois o valor lógico é true (1)
    }

    if (false) {
        // Não será executado, poque o valor lógico é false (0)
    }

    if (false) {
        // Como o valor lógico dentro do if é false, o
        // código que será executado será o do else
    } else {
        // Somente aqui está o código que será executado,
        // porque o else funciona como: "Caso contrário" ou
        // "faça isso caso aquilo não aconteça"
    }

    if (false) {
        // Condição 01: falsa, passa para a segunda condição: 
    } else if (false) {
        // Condição 02: falsa, passa para a terceira condição:
    } else {
        // Será executado caso nenhuma condição acima for ver-
        // dadeira
    }
}