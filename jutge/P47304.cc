#include <iostream>
#include <vector>
using namespace std;
typedef vector<char> str;
typedef vector<str> matrix;

void escriu(matrix m) {
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m[0].size(); ++i) cout << m[i][j];
		cout << endl;
	}
	for (int c = 0; c < 10; ++c) cout << '-';
	cout << endl;
}

int pow2(int n) { //0 <= n <= 8.
	int k = 1;
	while (n > 0) {
		k *= 2;
		--n;
	}
	return k;
}

void operate(matrix m) {
	string ordre;
	while (cin >> ordre) {
		if (ordre == "STOP") return;
		else if (ordre == "PRINT") escriu(m);
		else {
			for (int i = 0; i < ordre.length(); ++i) {
				//int min_row,min_col,max_row,max_col;
				
			}
		}
	}
}

int main() {
	int n;
	while (cin >> n) {
		int dim = pow2(n);
		matrix mat(dim,str(dim,'.'));
		operate(mat);
	}
}
