#include <iostream>
#include <cmath>
using namespace std;

double sq(double x) {
    return x*x;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
	double a,b,c;
    cin >> a >> b >> c;
    double delta = sq(b) - 4*a*c;
    if (delta < 0) cout << "sense solucio" << endl;
    else {
        if (delta == 0) cout << -b/(2*a) << endl;
        else cout << (-b-sqrt(delta))/(2*a) << ' ' << (-b+sqrt(delta))/(2*a) << endl;
    }
}
