#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//Pre: entra un vector de freqüències, amb elements més grans o iguals
//a zero.
//Especificació: la funció primer busca el màxim del vector, l'elimina
//(el fa igual a zero) i aleshores en torna a buscar el màxim. Retorna
//un caràcter que correspon a 'a'+pos on "pos" és la posició del segon
//màxim del vector.
char segon_max(vector<int>& freq) {
    int pos = 0;
    int m = 0;
    for (int i = 0; i < freq.size(); ++i) { //primera cerca del màxim
        if (freq[i] > m) {
            pos = i;
            m = freq[i];
        }
    }
    freq[pos] = 0; //elimina el primer màxim
    m = 0;
    for (int i = 0; i < freq.size(); ++i) { //segona cerca del màxim
        if (freq[i] > m) {
            pos = i;
            m = freq[i];
        }
    }
    return 'a'+pos;
}

//Pre: només entren paraules de lletres
//Especificació: la funció calcula la freqüència absoluta per cada
//lletra i ho posa en un vector de freqüències. f[i] correspon a la
//freqüència absoluta (és a dir, quantes vegades surt) de la lletra
//'a'+i.
vector<int> frequencies(string& s) {
    vector<int> f(26,0);
    for (int i = 0; i < s.length(); ++i) ++f[s[i]-'a'];
    return f;
}

int main() {
    string s;
    while (cin >> s) {
        vector<int> freq = frequencies(s);
        cout << segon_max(freq) << endl;
    }
}
