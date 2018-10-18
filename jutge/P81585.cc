#include <iostream>
using namespace std;

int main() {
    int n,a;
    while (cin >> n) {
        bool first = true;
        int max = 0, o = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            if (first) {
                max = a;
                first = false;
            }
            else {
                if (a > max) max = a;
            }
            o += a;
        }
        if (o - max == max) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
