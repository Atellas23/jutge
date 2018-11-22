#include <vector>
#include <iostream>
using namespace std;
typedef vector< vector<int> > Matriu;

Matriu sum(const Matriu& a, const Matriu& b) {
	Matriu C(a.size(), vector<int>(a.size()));
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < a.size(); ++j) {
			C[i][j] = a[i][j]+b[i][j];
		}
	}
	return C;
}


int main () {
    int n;
    while (cin >> n) {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = sum(A, B);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
