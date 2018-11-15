#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {}
        else {
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            for (int i = n - 1; i > 0; --i) {
                cout << a[i] << ' ';
            }
            cout << a[0];
        }
        cout << endl;
    }
}
