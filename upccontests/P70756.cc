#include <iostream>
#include <vector>
using namespace std;
using vs = vector<string>;
using vb = vector<bool>;
using vvb = vector<vb>;

vs par;

void print(vvb& m) {
    int n = m.size();
    int p = m[0].size();
    for (int i = 0; i < p; ++i) {
        cout << "subset " << i+1 << ": {";
        bool primer = true;
        for (int j = 0; j < n; ++j) {
            if (m[j][i]) {
                if (primer) {
                    cout << par[j];
                    primer = false;
                }
                else cout << ',' << par[j];
            }
        }
        cout << '}' << endl;
    }
    cout << endl;
}

void omple(int m, int p, vvb& matriu) {
    if (m == 0) {
        for (int i = 0; i < p; ++i) {
            matriu[m][i] = true;
            print(matriu);
            matriu[m][i] = false;
        }
    }
    else {
        for (int i = 0; i < p; ++i) {
            matriu[m][i] = true;
            omple(m-1,p,matriu);
            matriu[m][i] = false;
        }
    }
}

int main() {
    int n,p;
    cin >> n;
    par = vs(n);
    for (int i = 0; i < n; ++i) cin >> par[i];
    cin >> p;
    vvb matriu(n,vb(p,false));
    omple(n-1,p,matriu);
}
