#include <iostream>
#include <string>
using namespace std;

// Recebe os 5 números e avalia o comportamento da sequência
string analisarOrdenacao(double n1, double n2, double n3, double n4, double n5) {
    if (n1 <= n2 && n2 <= n3 && n3 <= n4 && n4 <= n5) {
        return "Em ordem crescente";
    } else if (n1 >= n2 && n2 >= n3 && n3 >= n4 && n4 >= n5) {
        return "Em ordem decrescente";
    } else {
        return "Nao ordenados";
    }
}

int main() {
    double n1, n2, n3, n4, n5;
    cout << "Digite 5 numeros:\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    cout << "Resultado: " << analisarOrdenacao(n1, n2, n3, n4, n5) << endl;
    
    return 0;
}
