#include <iostream>
using namespace std;

// Função para peso ideal masculino
double pesoMasculino(double altura) {
    return 72.7 * altura - 58;
}

// Função para peso ideal feminino
double pesoFeminino(double altura) {
    return 62.1 * altura - 44.7;
}

int main() {
    char sexo;
    double altura;
    
    cout << "Digite o sexo (M para Masculino / F para Feminino): ";
    cin >> sexo;
    cout << "Digite a altura (em metros, ex: 1.75): ";
    cin >> altura;
    
    if (sexo == 'M' || sexo == 'm') {
        cout << "O peso ideal eh: " << pesoMasculino(altura) << " kg" << endl;
    } else if (sexo == 'F' || sexo == 'f') {
        cout << "O peso ideal eh: " << pesoFeminino(altura) << " kg" << endl;
    } else {
        cout << "Opcao de sexo invalida." << endl;
    }
    
    return 0;
}
