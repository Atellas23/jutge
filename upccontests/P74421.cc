#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

vi count(vi& m) {
    int n = m.size();
    vi s(n+1);
    s[0] = 0;
    s[1] = m[0];
    for (int i = 2; i < n+1; ++i) s[i] = s[i-1] + m[i];
    return s;
}

int main() {
    int n,k=0;
    while (cin >> n) {
        ++k;
        vi m(n);
        for (int i = 0; i < n; ++i) cin >> m[i];
        vi sums = count(m);
        int q;
        cin >> q;
        int f,h;
        cout << '#' << k << endl;
        for (int j = 0; j < q; ++j) {
            cin >> f >> h;
            if (f == h) cout << m[h-1] << endl;
            else if (h < f) cout << sums[f-1]-sums[h-2] << endl;
            else cout << sums[h-1]-sums[f-2] << endl;
        }
    }
}
