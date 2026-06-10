#include <iostream>
using namespace std;

int main() {
    char letras[20];
    // vogais[0]='a', [1]='e', [2]='i', [3]='o', [4]='u'
    int vogais[5] = {0, 0, 0, 0, 0}; 

    cout << "Digite 20 letras (separadas por espaco):" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> letras[i];
        char c = tolower(letras[i]);
        
        if (c == 'a') vogais[0]++;
        else if (c == 'e') vogais[1]++;
        else if (c == 'i') vogais[2]++;
        else if (c == 'o') vogais[3]++;
        else if (c == 'u') vogais[4]++;
    }

    cout << "\nQuantidade de cada vogal encontrada:" << endl;
    cout << "A: " << vogais[0] << endl;
    cout << "E: " << vogais[1] << endl;
    cout << "I: " << vogais[2] << endl;
    cout << "O: " << vogais[3] << endl;
    cout << "U: " << vogais[4] << endl;

    return 0;
}
