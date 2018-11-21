#include <iostream>
#include <vector>
using namespace std;
using row = vector<char>;
using mc = vector<row>;

void escriu_matriu(mc& m) {
	for (int i = 0; i < m.size(); ++i) {
		cout << m[i][0];
		for (int j = 1; j < m.size(); ++j) cout << ' ' << m[i][j];
		cout << endl;
	}
}

void fill(mc& m,int k,char dir,int spos,int epos) {
	if (dir == 'u') {
		for (int i = spos; i >= epos; --i) {
			m[i][k] = 'X';
		}		
	}
	else if (dir == 'd') {
		for (int i = spos; i <= epos; ++i) {
			m[i][k] = 'X';
		}
	}
	else if (dir == 'l') {
		for (int i = spos; i >= epos; --i) {
			m[k][i] = 'X';
		}
	}
	else {
		for (int i = spos; i <= epos; ++i) {
			m[k][i] = 'X';
		}
	}
}

int main() {
	int n;
	while (cin >> n and n != 0) {
		int k = 0;
		mc m(n,row(n,'.'));
		for (int i = n; i > 0; i -= 2) {
			++k;
			if (k%2 == 1) {
				for (int j = 0; j < i; ++j) {
					m[i][j] = 'X';
					m[j][i] = 'X';
				}
			}
			else {
				for (int )
			}
		}
		/*
		int save = n%2;
		for (int k = n; k > 0; --k) {
			for (int i = n-k; i < k; ++i) {
				if (k%2 == save) m[k-1][i] = 'X';
				else m[][] = 'X';
		}	}*/
	}
}
