#include <iostream>
using namespace std;

char encode(char c, int k) {
    if (c <= 'z' and c >= 'a') return 'A' + (c-'a' + (k % 26)) % 26;
    else return c;
}

int main() {
    int k;
    char c;
    while (cin >> k) {
        while (c != '.') {
            cin >> c;
            if (c == '_') cout << " ";
            else if (c == '.') break;
            else cout << encode(c, k);
        }
        c = '0';
        cout << endl;
    }
}
