#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef vector<char> row;
typedef vector<row> matrix;

//Especificació: la funció escriu una matriu de caràcters, sense espais
//entre elements pertanyents a la mateixa fila, i amb salts de línia
//separant les files.
void escriu(matrix& tri) {
    for (int i = 0; i < tri.size(); ++i) {
        for (int j = 0; j < tri[0].size(); ++j) {
            cout << tri[i][j];
        }
        cout << endl;
    }
}

//Especificació: la funció retorna el quadrat de l'enter n. L'únic
//propòsit d'això és alliberar càrrega a la funció pow2().
int sq(int n) {
    return n*n;
}

//Especificació: la funció retorna la n-èssima potència de 2, mitjançant
//un procés de complexitat logarítmica.
int pow2(int n) {
    if (n == 0) return 1;
    if (n%2 == 0) return sq(pow2(n/2));
    return 2*sq(pow2(n/2));
}

//Especificació: la funció retorna l'amplada de la matriu que codifica
//el n-èssim triangle de Sierpinski.
int width(int n) {
    if (n == 1) return 1;
    return 2*width(n-1)+1;
}

//Pre: 0<=n<=11, 0<=y<tri.size(), 0<=x<tri[0].size().
//Especificació: la funció porta a terme un procés recursiu pel qual es
//pot escriure el triangle de Sierpinski de "profunditat" n.
void sierpinski(matrix& tri,int n,int y,int x) {
    if (n == 1) tri[y][x] = 'X';
    else {
        sierpinski(tri,n-1,y,x);
        sierpinski(tri,n-1,y+pow2(n-2),x+1+width(n-1)/2);
        sierpinski(tri,n-1,y+pow2(n-2),x-1-width(n-1)/2);
    }
}

int main() {
    int n;
    cin >> n;
    matrix tri(pow2(n-1),row(width(n),'.'));
    sierpinski(tri,n,0,tri[0].size()/2);
    escriu(tri);
}
