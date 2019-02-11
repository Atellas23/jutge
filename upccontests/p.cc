#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
vll v(34,0);

ll cat(int n) {
    if (v[n] != 0) return v[n];
    return v[n] = (2*(2*n+1)*cat(n-1))/(n+2);
}

int main() {
    v[0] = 1;
    int n;
    while (cin >> n) {
        if (n%2 == 1) cout << 0 << endl;
        else cout << cat(n/2-1) << endl;
    }
}
