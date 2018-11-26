#include <iostream>
#include <vector>
using namespace std;

void fusion(vector<int>& c,const vector<int>& A,const vector<int>& B) {
	int i=0,j=0;
	while (i < A.size() and j < B.size()) {
		if (A[i] <= B[j]) {
			c.push_back(A[i]);
			++i;
		}
		else {
			c.push_back(B[j]);
			++j;
		}
	}
	while (i < A.size()) {
		c.push_back(A[i]);
		++i;
	}
	while (j < B.size()) {
		c.push_back(B[j]);
		++i;
	}
}

void entrar(vector<int>& v) {
	int a;
	while (cin >> a) v.push_back(a);
}

int main() {
	vector<int> A,B,c;
	//entrar A
	entrar(A);
	entrar(B);
	fusion(c,A,B);
	for (int i = 0; i < c.size()-1; ++i) {
		cout << c[i] << ' ';
	}
	cout << c[c.size()-1] << endl;
}
