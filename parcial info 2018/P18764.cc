#include <iostream>
using namespace std;

int main() {
    int x,y;
    while (cin >> x >> y) {
        char c;
        int a = 1,b = 0,anterior = a;
        for (int i = 1; i <= x; ++i) {
            anterior = a;
            for (int j = 1; j <= y; ++j) {
                cin >> c;
                while (c != 'X' and a == j) {
                    ++a;
                }
                if (anterior == a and j == a and c == 'X') a = 0;
            }
            --a;
            b = i;
        }
        if (a + b == x + y) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
