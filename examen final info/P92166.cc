#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//Pre: entra un enter que diu quants grups de tres peluixos entraran.
//Especificació: la funció llegeix els preus de cada peluix i els posa
//en un vector, mentre a la vegada en suma els elements. Aleshores,
//ordena el vector en ordre no decreixent i resta del total la suma dels
//mínims de cada triplet començant pel primer element (és a dir, els
//preus més barats de cada triplet d'ossos).
void llegeix(int n) {
    vector<int> preus(3*n);
    int suma = 0;
    for (int i = 0; i < 3*n; ++i) {
        cin >> preus[i];
        suma += preus[i];
    }
    sort(preus.begin(),preus.end());
    for (int i = 0; i < 3*n; i += 3) suma -= preus[i];
    cout << suma << endl;
}

int main() {
    int n;
    while (cin >> n) llegeix(n);
}
