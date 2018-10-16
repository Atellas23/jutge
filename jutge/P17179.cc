#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n,m;
    double d, max, min, t;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        t = 0;
        bool first = true;
        for (int j = 0; j < m; ++j) {
            cin >> d;
            t += d;
            if (first) {
                max = d;
                min = d;
                first = false;
            }
            if (d > max) max = d;
            if (d < min) min = d;
        }
        cout << min <<  " " << max << " " << t/m << endl;
    }
}
