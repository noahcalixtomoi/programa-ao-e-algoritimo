#include <iostream>
using namespace std;

// Função para calcular a área de um círculo (A = pi * r^2)
double calcularAreaCirculo(double raio) {
    const double PI = 3.14159;
    return PI * raio * raio;
}

int main() {
    double raio, somaAreas = 0;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Digite o raio do circulo " << i << ": ";
        cin >> raio;
        somaAreas += calcularAreaCirculo(raio);
    }
    
    cout << "A soma das areas dos 5 circulos eh: " << somaAreas << endl;
    
    return 0;
}
