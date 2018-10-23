#include <iostream>
using namespace std;

void rom(int n) {
    if (n >= 1000) {
        rom(n-1000);
        cout << 'M';
    }
    else if (n >= 100 and n < 1000) {
        rom(n-100);
        cout << 'C';
    }
    else if (n >= 50 and n < 100)
    else if (n >= 10 and n < 50) {
        rom(n-10);
        cout << 'X';
    }
    else if (n >= 1 and n < 10) {
        rom(n-1);
        cout << 'I';
    }
}

int main () {
    int n;
    cin >> n;
    rom(n);
    cout << endl;
}
