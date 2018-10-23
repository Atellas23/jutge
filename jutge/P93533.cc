#include <iostream>
using namespace std;

void basemenysdos(int n) {
    if (n == 0 or n == 1) cout << n;
    else if (n%-2 == 0 or n%-2 == 1) {
        basemenysdos(n/-2);
        cout << n%-2;
    }
    else if (n%-2 == -1) {
        basemenysdos(n/-2 + 1);
        cout << 1;
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
