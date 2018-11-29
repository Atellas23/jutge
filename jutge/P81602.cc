#include <iostream>
#include <vector>
using namespace std;

void swap(double& a, double& b) {
    double c = a;
    a = b;
    b = c;
}

int position_minimum(const vector<double>& v, int inici, int fi) {
    double minim = v[inici];
    int pos = inici;
    for (int i = inici; i <= fi; ++i) {
        if (v[i] < minim) {
            minim = v[i];
            pos = i;
        }
    }
    return pos;
}

void selection_sort(vector<double>& v, int m) {
    for (int i = 0; i <= m; ++i) swap(v[i],v[position_minimum(v,i,m)]);
}
