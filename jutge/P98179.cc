#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {
    double a = v[v.size()-1];
    int i = v.size()-2;
    while (i >= 0 and v[i] > a) {
        v[i+1] = v[i];
        --i;
    }
    v[i+1] = a;
}
