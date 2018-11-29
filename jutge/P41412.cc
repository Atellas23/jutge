#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<double>& v) {
    for (int o = 0; o < v.size(); ++o) {
		double a = v[o];
		int i = o;
		while (i > 0 and v[i - 1] > a) {
			v[i] = v[i - 1];
			--i;
		}
		v[i] = a;
	}
}
