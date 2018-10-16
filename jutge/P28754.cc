#include <iostream>
#include <vector>
using namespace std;

//escriu un nombre en binari del revés

int main() {
    int n;
    vector<int> b;
    cin >> n;
    if (n == 0) cout << n << endl;
    else {
        while (n != 0) {
            b.push_back(n % 2);
            n /= 2;
        }
        int s = b.size();
        for (int i = 0; i < s; ++i) {
            cout << b[i];
        }
        cout << endl;
    }
}
