#include <iostream>
using namespace std;

// Função que calcula a potência usando um laço de repetição
long long calcularPotencia(int base, int expoente) {
    long long resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;
    
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente (positivo): ";
    cin >> expoente;
    
    if (expoente < 0) {
        cout << "Por favor, insira um expoente nao-negativo." << endl;
    } else {
        cout << base << "^" << expoente << " = " << calcularPotencia(base, expoente) << endl;
    }
    
    return 0;
}
