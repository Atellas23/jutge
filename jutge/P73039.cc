#include <iostream>
#include <vector>
using namespace std;
using ms = vector<string>;


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		ms M(10);
		int winner = 0;
		for (int j = 0; j < 10; ++j) cin >> M[j];
		for (int k = 0; k < 9; ++k) if (winner == 0 and M[k][M[k].size()-1] != M[k+1][0]) winner = (k%2) + 1;
		if (winner == 2) cout << 'B';
		else if (winner == 1) cout << 'A';
		else cout << '=';
		cout << endl;
	}
}
