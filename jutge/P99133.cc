#include <iostream>
#include <vector>
using namespace std;

void reverse(string s) {
		for (int i = s.size() - 1; i > -1; --i) cout << s[i];
		cout << endl;
}

int main() {
	int n;
	while (cin >> n) {
		vector<string> v(n);
        for (int k = 0; k < n; ++k) cin >> v[k];
        for (int i = n - 1; i > -1; --i) reverse(v[i]);
	}
}
