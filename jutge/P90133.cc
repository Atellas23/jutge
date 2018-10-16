#include <iostream>
using namespace std;

int power(int n, int k) {
    int aux = 1;
    if (k == 0) {}
    else {
        for (int i = 0; i < k; ++i) aux *= n;
    }
    return aux;
}

int log(int base, int x) {
    for (int i = 0; i < power(base,i); ++i) { //tocar això
        if (power(base,i) == x) return i;
        else if (power(base,i) > x) return i-1;
    }
}

int main () {
    int b,n;
    while (cin >> b >> n) cout << log(b,n) << endl;
}
