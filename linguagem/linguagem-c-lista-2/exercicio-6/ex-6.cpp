#include <iostream>
#include <string>
using namespace std;

// Função que mapeia o número ao dia correspondente
string obterDiaSemana(int numero) {
    switch(numero) {
        case 1: return "Domingo";
        case 2: return "Segunda-feira";
        case 3: return "Terca-feira";
        case 4: return "Quarta-feira";
        case 5: return "Quinta-feira";
        case 6: return "Sexta-feira";
        case 7: return "Sabado";
        default: return "Numero invalido! Escolha de 1 a 7.";
    }
}

int main() {
    int num;
    cout << "Digite um numero para o dia da semana (1-7): ";
    cin >> num;

    cout << obterDiaSemana(num) << endl;
    return 0;
}
