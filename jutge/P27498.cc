#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

void swap(int& a,int& b) {
	int c = a;
	a = b;
	b = c;
}

void transpose(Matrix& M) {
	for (int i = 0; i < M.size(); ++i) {
		for (int j = i+1; j < M.size(); ++j) swap(M[i][j],M[j][i]);
	}
}


int main () {
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transpose(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
