#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row;
typedef vector<row> matrix;

int main() {
	int n,m;
	while (cin >> m >> n) {
		matrix mat(m,row(n));
		int k;
		for (int i = 0; i < m; ++i) {
			row temp(n);
			for (int j = 0; j < n; ++j) cin >> temp[j];
			mat[i] = temp;
		}
		for (int fila = 0; fila < m; ++fila) {
			for (int columna = 0; columna < n; ++columna) {
				if (mat[fila][columna] != 0 and mat[fila][columna] != mat[fila][columna-1]) {
					
				}
			}
		}
	}
}
