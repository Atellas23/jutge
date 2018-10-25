#include <iostream>
using namespace std;

void rom(int n) {
    if (n >= 1000) {
        cout << 'M';
        rom(n-1000);
    }
    else if (n >= 100 and n < 1000) {
        if (n >= 400) {
            if (n >= 900) {
                cout << "CM";
                rom(n-900);
            }
            else if (n >= 400 and n < 500) {
                cout << "CD";
                rom(n-400);
            }
            else {
                cout << 'D';            
                rom(n-500);
            }
        }
        else {
            cout << 'C';
            rom(n-100);
        }
    }
    else if (n >= 10 and n < 100) {
        if (n >= 40) {
            if (n >= 90) {
                cout << "XC";
                rom(n-90);
            }
            else if (n >= 40 and n < 50) {
                cout << "XL";
                rom(n-40);
            }
            else {
                cout << 'L';
                rom(n-50);
            }
        }
        else {
            cout << 'X';
            rom(n-10);
        }
    }
    else if (n >= 1 and n < 10) {
        if (n >= 4) {
            if (n >= 9) {
                cout << "IX";
                rom(n-9);
            }
            else if (n >= 4 and n < 5) {
                cout << "IV";
                rom(n-4);
            }
            else {
                cout << 'V';
                rom(n-5);
            }
        }
        else {
            cout << 'I';
            rom(n-1);
        }
    }
}

int main () {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        rom(n);
        cout << endl;
    }
}
