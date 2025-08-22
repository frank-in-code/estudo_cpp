#include <iostream>
using namespace std;

int main() {
    /*
        Em alguns programas, há momentos em que um mesmo bloco de código
        deve ser rodado determinadas vezes, para isso usamos estruturas 
        de repetição. Nessas estruturas, são utilizados contadores que 
        precisam de incrementação ou decrementação
    
        ex: 

        enquanto um inteiro i igual a zero for menor que 10, i será igual
        a ele mesmo somado com uma unidade

        em c++

        for (int i = 0; i < 10; i++) {
            //código que será repetido até i não ser menor que 10 
        }

        mas isso será explorado futuramente!
    */


    int i = 0;
    int c = 10;

    //  ENCREMENTAÇÃO

    // forma tradicional:  
    c = c + 1;

    // alternativa compacta: 
    c += 1; //adicionou um a variável c (somar um número com ele mesmo e qualquer outro)
    c++; //também adicionou um a variável c (quando deseja somar ele mesmo SOMENTE com um)

    //  DECREMENTAÇÃO

    // forma tradicional: 
    i = i - 1;

    // forma compacta:
    i -= 1; // i é igual a ele mesmo menos uma unidade
    i--; // i é reduzido em uma unidade

    return 0;
}