/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:ex-1.cpp
* Data: 19/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
*Ler um número inteiro. Verificar e exibir se o número é primo.
*/
#include <iostream>
int main() {
   int numero;

	bool primo = true;
    std::cout << "digite o numero que voce deseja saber se é primo:";
    std::cin >> numero;
     
    if (numero < 2) {
        primo=false;
    }
    for (int i = 2; i < numero; i++) {
    if (numero % i == 0) { 
        primo = false;     
        break;            
    }
}
    
if (primo) {
    std::cout << "o numero " << numero << " é primo" << std::endl;
} else {
    std::cout << "o numero " << numero << "não é primo" << std::endl;
}
}
