#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct info {
    string s;
    int q;
};

bool abans(info x, info y) {
    if (x.q != y.q) return x.q > y.q;
    return x.s < y.s;
}

int main() {
    int n;
    cin >> n;
    vector<string> V(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    sort(V.begin(), V.end());
    vector<info> I;
    int i = 0;
    while (i < n) {
        int j = i + 1;
        while (j < n and V[j] == V[i]) ++j;
        I.push_back({V[i], j - i});
        i = j;
    }
    sort(I.begin(), I.end(), abans);
    for (int i = 0; i < (int)I.size(); ++i) cout << I[i].q << ' ' << I[i].s << endl;
}
