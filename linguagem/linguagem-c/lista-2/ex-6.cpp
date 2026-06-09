#include <iostream>
#include <string>
using namespace std;

string verificarDiaSemana(int dia) {
    switch(dia) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terca-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sabado";
        default: return "Dia invalido! Digite um valor entre 1 e 7.";
    }
}

int main() {
    int dia;
    cout << "Digite um numero para o dia da semana (1-7): ";
    cin >> dia;
    
    cout << verificarDiaSemana(dia) << endl;
    
    return 0;
}
