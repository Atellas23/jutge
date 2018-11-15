#include <iostream>
#include <vector>
using namespace std;

bool answer(int s, const vector<int>& v) {
	for (int i = 0; i < v.size(); ++i) if (2*v[i] == s) return true;
	return false;
}

int main() {
	int n,s;
	while (cin >> n) {
		s = 0;
		vector<int> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			s = s + v[i];
		}
		if (answer(s,v)) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
}
