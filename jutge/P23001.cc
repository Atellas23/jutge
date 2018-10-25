#include <iostream>
#include <string>
using namespace std;

int max(int k, int t) {
    if (k > t) return k;
    return t;
}

int main () {
    string seg,first;
    int k = 1, t = 1;
    cin >> first;
    while (cin >> seg) {
        if (seg == first) ++t;
        else {
            if (t > k) k = t;
            t = 0;
        }
    }
    cout << max(k,t) << endl;
}
