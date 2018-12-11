#include <iostream>
#include <vector>
using namespace std;
using vd = vector<double>;

vd va{1.0,2.0,2.0,5.0,5.0,7.0};
vd vb{2.0,3.0,3.0,7.0};
vd vc{2.0,2.0,2.0,2.0};

void swap(double& a,double& b) {
    double c = a;
    a = b;
    b = c;
}


void clear(vd& v) {
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] == v[i-1]) {
            swap(v[i],v[v.size()-1]);
            v.pop_back();
        }
    }
}

vd intersection(const vd& v1, const vd& v2) {
    vd copy = v1;
	vd c;
    int i = 0;
    int j = 0;
    while (i < v1.size() and j < v2.size()) {
        if (v1[i] > v2[j]) ++j;
        else if (v2[j] > v1[i]) ++i;
        else {
            c.push_back(v1[i]);
            ++i; ++j;
        }
    }
    clear(c);
	return c;
}

int main() {
    vd h = intersection(va,vc);
    cout << h[0];
    for (int i = 1; i < h.size(); ++i) cout << ' ' << h[i];
    cout << endl;
}
