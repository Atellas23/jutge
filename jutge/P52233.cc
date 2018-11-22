#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Row;
typedef vector<Row> Matrix;

int number_of_words(const Matrix& m, char c, int k) {
	int s = 0;
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m[i].size(); ++j) if (m[i][j].length() > k and m[i][j][k] == c) ++s;
	}
	return s;
}
