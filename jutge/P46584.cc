#include <iostream>
#include <vector>
using namespace std;
using vd = vector<double>;

vd va{9.2,9.2,9.2,9.2,9.2,9.2,9.2,9.2,9.2,9.2};
vd vb{2.0,3.0,3.0,7.0};
vd vc{2.0,2.0,2.0,2.0};
vd vf{1.0,2.0,2.0,5.0,5.0,7.0};
vd ve{2.0,3.0,3.0,7.0};

vd difference(const vd& v1, const vd& v2) {
	vd c = v1;
    int i = 0;
    int j = 0;
    while (i < c.size() and j < v2.size()) {
        if (c[i] > v2[j]) ++j;
        else if (c[i] < v2[j]) ++i;
        else {
            for (int a = i; a < c.size()-1; ++a) c[a] = c[a+1];
            c.pop_back();
        }
    }
    return c;
}

int main() {
    vd h = difference(vf,ve);
    cout << h[0];
    for (int i = 1; i < h.size(); ++i) cout << ' ' << h[i];
    cout << endl;
}
