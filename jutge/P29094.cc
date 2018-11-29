#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    double M = v[0];
    int pos = 0;
    for (int i = 1; i <= m; ++i) {
        if (v[i] > M) {
            M = v[i];
            pos = i;
        }
    }
    return pos;
}
