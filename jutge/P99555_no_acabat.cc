#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> row;
typedef vector<row> mx;

bool repeated(mx& m) {
	row nums;
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m.size(); ++j) nums.push_back(m[i][j]);
	}
	for (int k = 0; k < nums.size(); ++k) {
		for (int u = k+1; u < nums.size(); ++u) {
			if (nums[k] == nums[u]) return true;
		}
	}
	return false;
}

bool sums(mx& m) {
	int save = 0;
	for (int i = 0; i < m.size(); ++i) save += m[i][i];
	//suma de les files
	for (int i = 0; i < m.size(); ++i) {
		int rowSum = 0;
		for (int j = 0; j < m.size(); j++) rowSum += m[i][j]; 
		if (rowSum != save) return false;
	}
	//suma de les columnes
	for (int i = 0; i < m.size(); ++i) {
		int colSum = 0;
		for (int j = 0; j < m.size(); ++j) colSum += m[i][j];
		if (colSum != save) return false;
	}
	int antidiag_sum = 0;
	for (int i = 0; i < m.size(); ++i) antidiag_sum += m[i][m.size()-1-i];
	if (antidiag_sum != save) return false;
	return true;
}

void llegir_matriu(mx& m) {
	for (int i = 0; i < m.size(); ++i) {
		for (int j = 0; j < m.size(); ++j) cin >> m[i][j];
	}
}

bool is_magic_square(mx& m) {
	if (repeated(m)) return false;
	else return sums(m);
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
