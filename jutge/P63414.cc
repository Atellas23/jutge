#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n),u;
    bool first = true;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (first) {
            u.push_back(v[i]);
            first = false;
        }
        if (v[i] < u[0]) {
            u.push_back(0);
            for (int l = u.size()-1; l > 0; --l) {
                u[l] = u[l-1];
            }
            u[0] = v[i];
        }
        else if (v[i] > u[u.size()-1]) u.push_back(v[i]);
    }
    vector<int> counters(u.size());
    for (int i = 0; i < u.size(); ++i) {
        int k = 0;
        for (int j = 0; j < n; ++j) {
            if (u[i] == v[j]) ++k;
        }
        counters[i] = k;
    }
    for (int o = 0; o < u.size(); ++o) cout << u[o] << " : " << counters[o] << endl;
}
