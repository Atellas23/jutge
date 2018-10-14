#include <iostream>
#include <fstream>
using namespace std;

void print(int n) {
	for (int i = 1; i <= n - 1; ++i) {
		for (int j = 0; j < n - (i % n); ++j) {
			cout << " ";	//n - i espais
		}
		for (int k = 0; k < 2 * i - 1; ++k) {
			cout << "*";
		}
		cout << endl;
	}
    for (int i = 0; i < 2 * n - 1; ++i) cout << "*";
    cout << endl;
    for (int i = n - 1; i >= 1; --i) {
		for (int j = 0; j < n - (i % n); ++j) {
			cout << " ";	//n - i espais
		}
		for (int k = 0; k < 2 * i - 1; ++k) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	print(n);
}
