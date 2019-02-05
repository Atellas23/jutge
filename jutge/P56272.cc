#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using VVVE = vector<vvll>;
VVVE M(51, vvll(51, vll(51, -1)));

ll combinacions(int r, int c, int j) {
    ll& res = M[r][c][j];
    if (res != -1) return res;
    if (r == 1) return res = 1;
    res = 0; 
    if (j + 1 <= c - 1) res += combinacions(r - 1, c, j + 1);
    if (j - 1 >= 0) res += combinacions(r - 1, c, j - 1);
    return res;
}

int main() {
    int r, c;
    while (cin >> r >> c) {
        ll sum = 0;
        for (int i = 0; i < c; ++i) sum += combinacions(r, c, i);
        cout << sum << endl;
    }
}
