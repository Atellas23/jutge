#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> row;
typedef vector<row> mx;

void sums(const mx& m,row& inputrow,row& inputcol,int& diag,int& antidiag) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m.size(); ++j) {
            if (i == j) diag += m[i][j];
            if (i+j == m.size()) antidiag += m[i][j];
            inputrow[i] += m[i][j];
            inputcol[j] += m[i][j];
        }
    }
}

bool repeated(mx& m) {
	int s = 0;
    int n = m.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) s += m[i][j];
	}
    return s == (n*n*(n*n+1))/2;
}

void llegir_matriu(mx& m) {
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m.size(); ++j) cin >> m[i][j];
	}
}

bool is_magic_square(mx& m) {
	if (repeated(m)) return false;
	else {
        row inputrow(m.size(),0);
        row inputcol(m.size(),0);
        int antidiag = 0;
        int diag = 0;
        sums(m,inputrow,inputcol,diag,antidiag);
        for (int i = 1; i < inputrow.size(); ++i) {
            if (inputrow[i] != inputrow[i-1] or inputrow[i-1] != diag or inputrow[i-1] != antidiag) return false;
        }
        for (int j = 1; j < inputcol.size(); ++j) {
            if (inputcol[j] != inputcol[j-1] or inputcol[j-1] != diag or inputcol[j-1] != antidiag) return false;
        }
        return true;
    }
}

int main() {
	int n;
	while (cin >> n) {
		mx m(n,row(n));
		llegir_matriu(m);
		if (is_magic_square(m)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

