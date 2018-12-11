#include <iostream>
using namespace std;

double absolute(double a) {
    if (a < 0) return -a;
    return a;
}

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double d,va,vt;
    cin >> d >> va >> vt;
    if (va <= vt) cout << "mai" << endl;
    else cout << d/absolute(va-vt) << " segons" << endl;
}
