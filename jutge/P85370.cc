#include <iostream>
#include <cmath>
using namespace std;

double pow(double b, int exp) {
    if (exp == 0) return 1;
    else if (exp%2 == 0) return pow(b*b,exp/2);
    return b*pow(b*b,exp/2);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double c,i;
    int t;
    string type;
    cin >> c >> i >> t >> type;
    if (type == "simple") cout << c*(double(100+i)/100)*t-c << endl;
    else if (type == "compound") cout << c*pow(1.0+i/100,t) << endl;
}
