#include <iostream>
using namespace std;

int d(int a) {
    if (a == -2) return 1;
    if (a < 0) return ((-a)/2 + 1);
    else return a/(-2);
}

int mod(int a, int b) {
    int m = a%b;
    if (m < 0) return m+2;
    return m;
}

void basemenysdos(int n) {
    if (d(n) == 0) cout << mod(n,(-2));
    else {
        basemenysdos(d(n));
        cout << mod(n,(-2));
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << ": ";
        basemenysdos(n);
        cout << endl;
    }
}
