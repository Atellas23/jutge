#include <iostream>
using namespace std;

// Pre: 1 <= x <= y
// Retorna la suma dels divisors de y que son multiples de x.
int suma_divisors_i_multiples(int x, int y) {
    if (y%x > 0) return 0; // si x no divideix a y, el resultat es 0
    y /= x; // treiem x (la tornarem a posar al final)
    int sum = 0; // al final sera la suma dels divisors de y
    for (int d = 1; d*d <= y; ++d) { // nomes cal arribar fins a l'arrel de y
        // si cal, sumem un divisor petit (d) i el seu corresponent gran (y/d)
        if (y%d == 0) sum += d + y/d;
        if (d*d == y) sum -= d; // per quan y es un quadrat perfecte
    }
    return x*sum; // tornem a posar la x
}


int main() {
  int x, y;
  while (cin >> x >> y) cout << suma_divisors_i_multiples(x, y) << endl;
}
