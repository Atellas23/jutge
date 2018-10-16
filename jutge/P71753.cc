#include <iostream>
using namespace std;

const int INF = 2147483648;

int main() {
    int n, b;
    while (cin >> n) {
        int max = -INF;
        for (int i = 0; i < n; ++i) {
            cin >> b;
            if (b > max) max = b;
        }
        cout << max << endl;
    }
}
