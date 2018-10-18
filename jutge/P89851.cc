#include <iostream>
using namespace std;

int tri(int n) {
    return n*(n+1)/2;
}

int main() {
    int n,a,o;
    while (cin >> n) {
        o = 0;
        for (int i = 0; i < n - 1; ++i) {
            cin >> a;
            o += a;
        }
        cout << tri(n) - o << endl;
    }
}
