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

int main () {
    int a,b;
    while (cin >> a >> b) cout << power(a,b) << endl;
}
