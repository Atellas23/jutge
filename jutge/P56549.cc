#include <iostream>
using namespace std;

void base2 (int n) {
    if (n/2==0) cout << n%2;
    else {
        base2(n/2);
        cout << n%2;
    }
}

void base8 (int n) {
    if (n/8==0) cout << n%8;
    else {
        base8(n/8);
        cout << n%8;
    }
}

void base16 (int n) {
    if (n/16==0) {
        if (n%16>9) cout << char('A' + n%16 - 10);
        else cout << n%16;
    }
    else {
        if (n%16 > 9) {
            base16(n/16);
            cout << char('A' + n%16 - 10);
        }
        else {
            base16(n/16);
            cout << n%16;
        }
    }
}

void print(int n) {
    cout << n << " = ";
    base2(n);
    cout << ", ";
    base8(n);
    cout << ", ";
    base16(n);
    cout << endl;
}

int main() {
    int n;
    while (cin >> n) print(n);
}
