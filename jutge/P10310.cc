#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//Especificació: la funció comprova si el vector v és no-nul, és a dir,
//si té algun element diferent de zero.
bool zero(vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) if (v[i] != 0) return false;
    return true;
}

//Especificació: la funció escriu els elements d'un vector, separats
//entre ells per espais i amb un salt de línia al final.
void escriu(vector<int>& v) {
    for (int i = 0; i < v.size()-1; ++i) cout << v[i] << ' ';
    cout << v[v.size()-1] << endl;
}

//El programa principal començar omplint un vector d'esquerra a dreta
//amb els primers 41 nombres de Fibonacci. Després, llegeix el nombre de
//pots, n, i per cada pot llegeix quantes patates té. Aleshores, mentre
//el vector que guarda quantes patates queden a cada pot sigui diferent
//de zero, busca el primer pot tal que la quantitat de patates que té
//menys el j-èssim nombre de Fibonacci sigui no negatiu. Si existeix, li
//resta, escriu el vector, i passa a la següent j. Si no existeix, es
//decrementa la j, seguint el procés d'en Jan. En finalitzar cada cas,
//es fa un salt de línia.
int main() {
    vector<int> fib(41);
    fib[0] = 0; fib[1] = 1;
    int j = 2;  //apunta al nombre de Fibonacci j.
    for (; j < 41; ++j) fib[j] = fib[j-1] + fib[j-2];
    int n;
    while (cin >> n) {
        vector<int> pots(n);
        int i = 0;  //apunta al pot i.
        for (; i < n; ++i) cin >> pots[i];
        i = 0;
        j = 2;
        while (not zero(pots)) {
            i = 0;
            //primer busquem si existeix un pot tal que les seves
            //patates menys fib[i] sigui no-negatiu.
            bool found = false;
            while (not found and i < n) {
                found = pots[i] - fib[j] >= 0;
                ++i;
            }
            if (found) {    //si el trobem fem la resta.
                --i;
                pots[i] -= fib[j];
                escriu(pots);
                ++j;
            }
            else --j;   //si no el trobem, anem al (j-1)-èssim nombre de
                        //Fibonacci.
        }
        cout << endl;
    }
}
