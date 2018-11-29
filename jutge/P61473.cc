#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

bool is_symmetric(const Matrix& m) {
	for (int i = 0; i < m.size(); ++i) {
		for (int j = i+1; j < m.size(); ++j) if (m[i][j] != m[j][i]) return false;
	}
	return true;
}
