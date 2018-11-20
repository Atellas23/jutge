#include <iostream>
#include <vector>
using namespace std;
using row = vector<int>;
using mx = vector<row>;

void escriu(mx& M,char t,int k) {
    if (t == 'r') {
        for (int i = 0; i < M[0].size(); ++i) {
            cout << ' ' << M[k][i];
        }
        cout << endl;
    }
    else if (t == 'c') {
        for (int i = 0; i < M.size(); ++i) {
            cout << ' ' << M[i][k];
        }
        cout << endl;
    }
}

void llegir(mx& M,int n,int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> M[i][j];
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    mx M(n,row(m));
    llegir(M,n,m);
    string s;
    while (cin >> s) {
        if (s == "row") {
            int i;
            cin >> i;
            cout << s << ' ' << i << ':';
            escriu(M,'r',i-1);
        }
        else if (s == "column") {
            int j;
            cin >> j;
            cout << s << ' ' << j << ':';
            escriu(M,'c',j-1);
        }
        else if (s == "element") {
            int i,j;
            cin >> i >> j;
            cout << s << ' ' << i << ' ' << j << ": " << M[i-1][j-1] << endl;
        }
    }
}
