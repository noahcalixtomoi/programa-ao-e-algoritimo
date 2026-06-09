#include <iostream>
using namespace std;

double adicao(double a, double b) { return a + b; }
double subtracao(double a, double b) { return a - b; }
double multiplicacao(double a, double b) { return a * b; }

double divisao(double a, double b) {
    if (b == 0) {
        cout << "[Erro: Divisao por zero!] ";
        return 0;
    }
    return a / b;
}

int main() {
    double n1, n2;
    cout << "Digite dois numeros: ";
    cin >> n1 >> n2;
    
    cout << "Adicao: " << adicao(n1, n2) << endl;
    cout << "Subtracao: " << subtracao(n1, n2) << endl;
    cout << "Multiplicacao: " << multiplicacao(n1, n2) << endl;
    cout << "Divisao: " << divisao(n1, n2) << endl;
    
    return 0;
}
