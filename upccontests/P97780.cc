#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using vd = vector<double>;

void buida(vd& v) {
    for (int i = 0; i < (int)v.size(); ++i) v[i] = 0;
}

double evaluate(vd& v,double x) {
    double s = v[4];
    for (int i = 3; i > -1; --i) {
        s *= x;
        s += v[i];
    }
    return s;
}

double calcula(vd& v,double inici,double fi) {
    if (abs(inici - fi) < 0.000001) return inici;
    double a = evaluate(v,inici);
    double b = evaluate(v,fi);
    double c = evaluate(v,(inici + fi)/2);
    if (a*c < 0) calcula(v,inici,(inici + fi)/2);
    else if (c*b < 0) calcula(v,(inici + fi)/2,fi);
}

double trunca(double d) {
    d *= 1e5;
    return trunc(d)/(1e5);
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(5);
    vd coeficients(5,0);
    double c;
    int n,k = 0;
    while (cin >> c >> n) {
        coeficients[n] = c;
        if (n == 0) {
            cout << "Case " << ++k << ": zero at " << trunca(calcula(coeficients,0,1)) << '.' << endl;
            buida(coeficients);
        }
    }
    
}
