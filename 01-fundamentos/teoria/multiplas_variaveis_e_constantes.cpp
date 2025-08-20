#include <iostream>
using namespace std;

// Diretivas #define

#define PI 3.14159 
// PI terá sempre o valor 3.14159 em qualquer parte do código
// Ela será tratada como uma CONSTANTE pelo compilador

#define olamundo cout << "Olá, Mundo!\n" 
// É possível definir comandos assim.
// Sempre que houver "olamundo" no código, o compilador substituirá por cout << "Olá, Mundo!\n"

int main() {

    // Declarando várias variáveis do mesmo tipo
    int a, b, c, d; 
    // 4 variáveis criadas em uma linha
    // Perceba que usamos vírgula entre os nomes das variáveis

    // Também é possível declarar variáveis de tipos diferentes na mesma linha
    int idade; 
    float peso; 
    string nome; 
    bool ativo; 
    // Cada tipo diferente precisa de ponto e vírgula para separar

    // Uso da constante PI
    // Mesmo fora da função main, ela pode ser usada em qualquer parte do código
    cout << "Pi é aproximadamente: " << PI << endl;

    float raio, areacirculo, circunferencia;

    cout << "Informe um raio: ";
    cin >> raio;
    
    areacirculo = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    cout << "A área do círculo é de " << areacirculo 
         << " e a circunferência é de " << circunferencia << endl;

    // Uso da macro olamundo
    olamundo;

    return 0;
}
