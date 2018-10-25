#include <iostream>
using namespace std;

int main () {
    char c, anterior;
    while (cin >> c) {
        int k = 0;
        anterior = c;
        while (c != '.') {
            cin >> c;
            if (anterior == 'M') k += 1000;
            if (anterior == 'D') k += 500;
            if (anterior == 'C') {
                if (c == 'M' or c == 'D') k -= 100;
                else k += 100;
            }
            if (anterior == 'L') k += 50;
            if (anterior == 'X') {
                if (c == 'C' or c == 'L') k -= 10;
                else k += 10;
            }
            if (anterior == 'V') k += 5;
            if (anterior == 'I') {
                if (c == 'X' or c == 'V') k -= 1;
                else ++k;
            }
            cout << anterior;
            anterior = c;
        }
        cout << " = " << k << endl;
    }
}
