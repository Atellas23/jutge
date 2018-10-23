#include <iostream>
using namespace std;

double max (double a, double b) {
    if (a > b) return a;
    return b;
}

double min (double a, double b) {
    if (a < b) return a;
    return b;
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double d,v1,v2;
    cin >> d >> v1 >> v2;
    double M = max(v1,v2), m = min(v1,v2);
    if (v2 > v1) cout << "mai" << endl;
    else cout << d/(M-m) << " segons" << endl;
}
