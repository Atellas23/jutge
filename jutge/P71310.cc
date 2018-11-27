#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
    double s = 0;
    for (int i = 0; i < u.size(); ++i) s += v[i]*u[i];
    return s;
}
