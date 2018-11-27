#include <iostream>
#include <vector>
using namespace std;
using vd = vector<double>;

vd v1{1.0,2.0,2.0,5.0,5.0,7.0};
vd v2{2.0,3.0,3.0,7.0};

vd intersection(const vd& v1, const vd& v2) {
	vd c;
    for (int i = 0; i < v1.size(); ++i) {
        for (int j = 0; j < v2.size(); ++j) {
            if (v1[i] == v2[j] and v1[i] != c[c.size()-1]) c.push_back(v1[i]);
        }
    }
	return c;
}

int main() {
    vd h = intersection(v1,v2);
    cout << h[0];
    for (int i = 1; i < h.size(); ++i) cout << ' ' << h[i];
    cout << endl;
}
