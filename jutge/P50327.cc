#include <iostream>
using namespace std;

//escriu un nombre del revés

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << n << endl;
    else {
        while (n != 0) {
            cout << n % 10;
            n /= 10;
        }
        cout << endl;
    }
}
