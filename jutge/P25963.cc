#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double t,q;
    cin >> t >> q;
    if (q >= 1) cout << "mai" << endl;
    else cout << t/(1-q) << " segons" << endl;
}
