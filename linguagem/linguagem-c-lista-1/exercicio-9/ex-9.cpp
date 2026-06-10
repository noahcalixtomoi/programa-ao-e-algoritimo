#include <iostream>
using namespace std;

int main() {
    int limite;

    // Validação da entrada: exige um número entre 50 e 100
    do {
        cout << "Digite un numero para o limite entre 50 e 100: ";
        cin >> limite;
    } while (limite < 50 || limite > 100);

    // Inicialização dos primeiros termos da sequência
    int termo1 = 0;
    int termo2 = 1;
    
    cout << "Sequencia de Fibonacci ate " << limite << ":" << endl;
    
    // Exibe o primeiro termo se ele não passar do limite
    if (termo1 <= limite) {
        cout << termo1 << " ";
    }
    // Exibe o segundo termo se ele não passar do limite
    if (termo2 <= limite) {
        cout << termo2 << " ";
    }

    // Calcula os próximos termos dinamicamente
    int proximo_termo = termo1 + termo2;

    while (proximo_termo <= limite) {
        cout << proximo_termo << " ";
        
        // Atualiza as variáveis para a próxima iteração (avança na sequência)
        termo1 = termo2;
        termo2 = proximo_termo;
        proximo_termo = termo1 + termo2;
    }
    cout << endl;

    return 0;
}
