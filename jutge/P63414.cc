#include <iostream>
#include <vector>
using namespace std;
using vec = vector<int>;

int main() {
    int n,x;
    cin >> n;
    vec k(1001);
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++k[x-1000000000];
    }
    for (int j = 0; j < 1001; ++j) {
        if (k[j] != 0) cout << j+1000000000 << " : " << k[j] << endl;
    }
}
