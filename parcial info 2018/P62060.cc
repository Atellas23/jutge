#include <iostream>
using namespace std;

int main() {
    int n,m,k = 1,max = 1;
    cin >> n;
    while (cin >> m) {
        if (m > n) {
            ++k;
            if (k > max) max = k;
        }
        else k = 1;
        n = m;
    }
    cout << max << endl;
}

